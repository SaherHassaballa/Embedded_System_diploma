#include <stdio.h>


FILE *MyFile = NULL ;

int main(){
    MyFile = fopen("text.txt" , "w");
    fprintf(MyFile , "saher love you !!!\n");
    fclose(MyFile);

    MyFile = fopen("text.txt" , "r");
    unsigned char arr[40];
    fgets(arr , 20 , MyFile);
    printf("the string is : %s" , arr);
}