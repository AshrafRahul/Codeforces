#include<stdio.h>
int main() {
    float a, b;
    scanf("%f %f", &a, &b);

    float result = ((a*b)/(100-a))+b;
    printf("%.2f\n", result);

    return 0;
}