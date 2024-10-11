#include <stdio.h>

int main() {
    int num;
    double hei, wei, bmi, stawei;

    printf("Please insert your height(cm)>");
    scanf("%lf", &hei);
    printf("Please insert your weight(kg)>");
    scanf("%lf", &wei);

    double heim = hei / 100;
    bmi = wei / (heim * heim);
    printf("BMI is %.1f\n", bmi);
    stawei = (heim * heim) * 22;
    printf("weight average is %.2f\n", stawei);
}