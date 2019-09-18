#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define length 20 //length of the room
#define width 10  //width of the room
#define hight 5   //hight the room
#define I 10 //identical
#define N 2   //number of the LED
#define DEBUG

int LED[width + 1][length + 1] = {0};   //store LED location
int LEDtemp[width + 1][length + 1] = {0};   //store LED best location
double space[width + 1][length + 1] = {0.0}; //store the illumination of every place
double E[width + 1][length + 1][width + 1][length + 1] = {0};   //store the pre-trained data of illumination
double Umax = 0;  //store the max of U in each epoch
int w = 0;

void pretrain() {
    int i, j, s, t;
    double r;
    for (i = 0; i < width + 1; i++) {
        for (j = 0; j < length + 1; j++) {
            for (s = 0; s < width + 1; s++) {
                for (t = 0; t < length + 1; t++) {
                    r = sqrt(25 + sqrt(pow(i - s, 2) + pow(j - t, 2)));
                    E[i][j][s][t] = I * hight / pow(r, 3);
                }
            }

        }
    }
    printf("\npretrain finished!\n");
}


void calculateAllE() {
    int i, j, s, t;
    double r = 0.0;
    for (i = 0; i < width + 1; i++) {
        for (j = 0; j < length + 1; j++) {
            space[i][j] = 0;
        }
    }
    for (i = 0; i < width + 1; i++) {
        for (j = 0; j < length + 1; j++) {
            if (LED[i][j] == 1) {
                for (s = 0; s < width + 1; s++) {
                    for (t = 0; t < length + 1; t++) {
                        space[s][t] += E[i][j][s][t];
                    }
                }
            }
        }
    }
}

double calculateU() {
    int i, j;
    double Emin = space[0][0], Emax = space[0][0];
    for (i = 0; i < width + 1; i++) {
        for (j = 0; j < length + 1; j++) {
            if (Emin > space[i][j]) {
                Emin = space[i][j];
            }
            if (Emax < space[i][j]) {
                Emax = space[i][j];
            }
        }
    }
    return Emin / Emax;
}

void display() {
    int i, j;
    for (i = 0; i < width + 1; i++) {
        for (j = 0; j < length + 1; j++) {
            printf("%d ", LEDtemp[i][j]);
        }
        printf("\n");
    }
}

void displayLED() {
    int i, j;
    for (i = 0; i < width + 1; i++) {
        for (j = 0; j < length + 1; j++) {
            printf("%d ", LED[i][j]);
        }
        printf("\n");
    }
}

void displayspace() {
    int i, j;
    for (i = 0; i < width + 1; i++) {
        for (j = 0; j < length + 1; j++) {
            printf("%lf ", space[i][j]);
        }
        printf("\n");
    }
}


void findLED1() {
    int i, j, x, y;
    double E = 0.0, u;
    for (i = 0; i < width + 1; i++) {
        for (j = 0; j < length + 1; j++) {
            LED[i][j] = 1;
            calculateAllE();
            u = calculateU();
            if (u > E) {
                E = u;
                x = i;
                y = j;
            }
            LED[i][j] = 0;
        }
    }
    printf("LEDs location are : (%d,%d)\n", x, y);
    LED[x][y] = 1;
}

void findLED2() {
    int x1, y1, x2, y2;
    int i, j, s, t;
    double E = 0.0, u;
    for (i = 0; i < width + 1; i++) {
        for (j = 0; j < length + 1; j++) {
            for (s = 0; s < width + 1; s++) {
                for (t = 0; t < length + 1; t++) {
                    LED[i][j] = 1;
                    LED[s][t] = 1;
                    calculateAllE();
                    u = calculateU();
#ifdef DEBUG
                    w++;
#endif
                    if (u > E) {
                        E = u;
                        x1 = i;
                        y1 = j;
                        x2 = s;
                        y2 = t;
                    }
                    LED[i][j] = 0;
                    LED[s][t] = 0;
                }
            }
        }
    }
    printf("LEDs location are : (%d,%d) (%d,%d)\n", x1, y1, x2, y2);
    LED[x1][y1] = 1;
    LED[x2][y2] = 1;
}

void findLED(int n, int s) {
    int i, j;
    double u;
    for (i = 0; i < width + 1; i++) {
        for (j = 0; j < length + 1; j++) {
            if ((i * (length + 1) + j) >= s) {
                LED[i][j] = 1;
                if (n > 1) {
                    findLED(n - 1, i * (length + 1) + j + 1);
                } else if (n == 1) {
                    w++;
                    calculateAllE();
                    u = calculateU();
                    if (u > Umax) {
                        Umax = u;
                        memcpy(LEDtemp, LED, sizeof(LED));
                    }
                    LED[i][j] = 0;
                }
                LED[i][j] = 0;
            }
        }
    }
}

int main() {
    pretrain();
    int i;
    findLED(N, 0);
    display();
    printf("\n\n");
#ifdef DEBUG
    printf("%d\n", w);
#endif
    return 0;
}

