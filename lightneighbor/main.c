#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define length 20 //length of the room
#define width 10  //width of the room
#define hight 5   //hight the room
#define I 1 //identical
#define N 10  //number of the LED
#define DEBUG

int LEDindex[N][2] = {0};
int LED[width + 1][length + 1] = {0};   //store LED location
int LEDtemp[width + 1][length + 1] = {0};   //store LED best location
double space[width + 1][length + 1] = {0.0}; //store the illumination of every place
double bestspace[width + 1][length + 1] = {0.0}; //store the best illumination of every place
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
                    r = sqrt(pow(hight, 2) + pow(i - s, 2) + pow(j - t, 2));
                    E[i][j][s][t] = I * hight / pow(r, 3);
                }
            }

        }
    }
    printf("\npretrain finished!\n");
}

void clearLED() {
    int i, j;
    for (i = 0; i < width + 1; i++) {
        for (j = 0; j < length + 1; j++) {
            LED[i][j] = 0;
        }
    }
}

void randomLED(int n) {
    clearLED();
    srand(time(0));
    int i, x, y;
    for (i = 0; i < n; i++) {
        x = rand() % (width + 1);
        y = rand() % (length + 1);
        if (LED[x][y] == 1) {
            i--;
            continue;
        } else {
            LED[x][y] = 1;
            LEDindex[i][0] = x;
            LEDindex[i][1] = y;
        }
    }

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

void displaybestspace() {
    int i, j;
    for (i = 0; i < width + 1; i++) {
        for (j = 0; j < length + 1; j++) {
            printf("%0.2lf ", bestspace[i][j]);
        }
        printf("\n");
    }
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
#ifdef DEBUG1
                    display();
                    printf("\n\n");
                    w++;
#endif
                    calculateAllE();
                    u = calculateU();
                    if (u > Umax) {
                        Umax = u;
                        memcpy(LEDtemp, LED, sizeof(LED));
                        memcpy(bestspace, space, sizeof(space));
                    }
                    LED[i][j] = 0;
                }
                LED[i][j] = 0;
            }
        }
    }
}

void findLED1(int n, int k) {
    int i, j;
    double u;
    int istart = (width / n) * k, iend = ((width / n) * (k + 1)) + 1;
    for (i = istart; i < iend; i++) {
        for (j = 0; j < length + 1; j++) {
            if (LED[i][j] == 1) continue;
            LED[i][j] = 1;
            if (n > k + 1) {
                findLED1(n, k + 1);
            } else if (n == k + 1) {
#ifdef DEBUG1
                displayLED();
                printf("\n");
                w++;
#endif
                calculateAllE();
                u = calculateU();
                if (u > Umax) {
                    Umax = u;
                    printf("%lf", u);
                    memcpy(LEDtemp, LED, sizeof(LED));
                }
                LED[i][j] = 0;
            }
            LED[i][j] = 0;

        }
    }
}

void renewindex() {
    int i = 0, s, t;
    for (s = 0; s < width + 1; s++) {
        for (t = 0; t < length + 1; t++) {
            if (LED[s][t] == 1) {
                LEDindex[i][0] = s;
                LEDindex[i][1] = t;
                i++;
            }
        }
    }
}


void findLEDbeyneighbor(int n) {
    int i, j, x, y;
    double u;
    x = LEDindex[n][0];
    y = LEDindex[n][1];
    if (n == N - 1) {
        w++;
        calculateAllE();
        u = calculateU();
        if (u > Umax) {
            Umax = u;
            memcpy(LEDtemp, LED, sizeof(LED));
        }
    } else {
        findLEDbeyneighbor(n + 1);
        if (x > 0 && LED[x - 1][y] == 0) {
            LED[x][y] = 0;
            LED[x - 1][y] = 1;
            findLEDbeyneighbor(n + 1);
            LED[x][y] = 1;
            LED[x - 1][y] = 0;
        }
        if (y > 0 && LED[x][y - 1] == 0) {
            LED[x][y] = 0;
            LED[x][y - 1] = 1;
            findLEDbeyneighbor(n + 1);
            LED[x][y] = 1;
            LED[x][y - 1] = 0;
        }
        if (x < width && LED[x + 1][y] == 0) {
            LED[x][y] = 0;
            LED[x + 1][y] = 1;
            findLEDbeyneighbor(n + 1);
            LED[x][y] = 1;
            LED[x + 1][y] = 0;
        }
        if (y < length && LED[x][y + 1] == 0) {
            LED[x][y] = 0;
            LED[x][y + 1] = 1;
            findLEDbeyneighbor(n + 1);
            LED[x][y] = 1;
            LED[x][y + 1] = 0;
        }
    }
}

void weizhen() {

}

int main() {
    pretrain();
    int i;
    double tempu;
    randomLED(N);
    displayLED();
    calculateAllE();
    printf("Ustart : %lf\n", calculateU());
    for (i = 0; i < 20; i++) {
        findLEDbeyneighbor(0);
        memcpy(LED, LEDtemp, sizeof(LED));
        renewindex();
        if (tempu == Umax) {
            break;
        } else {
            tempu = Umax;
        }
        printf("w : %d , Umax : %lf\n", w, Umax);
    }

    display();
}

