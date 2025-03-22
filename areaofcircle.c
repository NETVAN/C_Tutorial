#include <stdio.h>

int main() {
   int  radius;
   float PI =3.14,area;
   printf("Enter the Radius  :");
   scanf("%d",& radius);
   area= PI *radius*radius;
   printf("Area of circle is :%f",area);
   
    return 0;
}