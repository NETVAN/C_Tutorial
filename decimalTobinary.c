#include <stdio.h>

int main() {
    int n;
    printf("Enter a decimal number ");
    scanf("%d",&n);
    int rem; //remainder 
    int a[10]; //array
    int i =0; 
    while(n){ //loop 1 
        rem = n%2;
        n = n/2;
        a[i] = rem;
        i++;
    }
    for(int j= i - 1;j >=0;j--){// loop 2
        printf("%d",a[j]);
    }
    
    return 0;
}
