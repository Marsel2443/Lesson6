#include <stdio.h>
#include <math.h>

#define PI 3.1415926535

float cosinus(float x);


int main(void) {
    double a;
    printf("Input number: ");
    scanf("%lf", &a);
    a *= PI / 180.0;

    printf("%.3f", cosinus(a));

    return 0;
}

float cosinus(float x) {
    double Xn = 1.0f;
    double sum = 0.0;
    int i = 1;
    do {
        sum += Xn;
        Xn *= -1.0 * x * x / ((2 * i) * (2 * i - 1));
        i++;
    } while (fabs(Xn) > 0.001);
    return sum;

}
