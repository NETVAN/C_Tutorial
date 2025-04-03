#include <stdio.h>

int main() {
    int i,j;
    int rows;
    printf("Enter the Row : ");
    scanf("%d",&rows);
    //loop for each row 
    for(i=1;i<=rows;i++){
    //loop for printing asterisks
    for(j=1;j<=i;j++){
        printf("*");
            }
        printf("\n");//move to next line 
    }

    return 0;
}
