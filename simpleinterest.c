#include<stdio.h>   
int main() {
    int p, r, t;
    float si;
    printf("Enter the Principal Amount :");
    scanf("%d", &p);
    printf("Enter the Rate of Interest :");
    scanf("%d", &r);
    printf("Enter the Time Period :");
    scanf("%d", &t);
    si = (p * r * t) / 100;
    printf("Simple Interest is :%f", si);
    return 0;
}