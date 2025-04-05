#include<stdio.h>
int main(){
    FILE *source ,*target;
    char ch;

    // open source file 
    source = fopen("source.txt","r");
    if(source == NULL){
        printf("Source file does not exist  \n");
            }

            // open target  file in write mode 
            target = fopen ("target.txt","w");
            if(target== NULL){
                printf("Target file can not be created ;\n");
                fclose(source);

            }
            //copy content
            while((ch =fgetc(source )) != EOF){
                fputc(ch, target);
                          }
            printf("File copied sucesssfully \n");
            fclose(source);
            fclose(target);


} 
