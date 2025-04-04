#include<stdio.h>
int main() {
   char str[100];//character array to store a string 
   int length = 0;//varriable to store the length of the string 
   //input form user
   printf("Enter the string : ");
  fgets(str,sizeof(str),stdin);
   
  //loop to count the number character unit the null 
  while (str[length] !='\0'&& str[length] !='\n'){
      length++;
        }
        //output the length of the string 
        printf("Length of the string :%d\n",length);
        
    return 0;
}
