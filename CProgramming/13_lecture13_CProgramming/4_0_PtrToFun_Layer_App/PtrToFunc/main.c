#include <stdio.h>

void Print_Summing1(unsigned int Num1 , unsigned int Num2);
void Print_Summing2(unsigned int Num1 , unsigned int Num2);
void (*PtrPrint)(unsigned int , unsigned int )= NULL; //function pointer
void Summing(unsigned int Num1 , unsigned int Num2 , void (*Ptr_Sum)(unsigned int , unsigned int ));


int main(){
    unsigned char choess= 0 ; 
    PtrPrint = Print_Summing1;
    PtrPrint(4,5);
    PtrPrint = Print_Summing2;
    PtrPrint(2,3);

    printf("enter 1 or 2 : ");
    scanf("%c" , &choess);
    printf("\n");

    if(choess == '1'){
        Summing(5,5,Print_Summing1);
    }
    else if (choess == '2')
    {
        Summing(5,5,Print_Summing2);   
    }else{
        printf("invalid enter\n");
    }
    
}

void Print_Summing1(unsigned int Num1 , unsigned int Num2){
    printf("Summing 1 is : %i\n" , (Num1+Num2));
}

void Print_Summing2(unsigned int Num1 , unsigned int Num2){
    printf("Summing 2 is : %i\n" , (Num1+Num2));
}

void Summing(unsigned int Num1 , unsigned int Num2 , void (*Ptr_Sum)(unsigned int , unsigned int )){
    Ptr_Sum(Num1 , Num2);
}
