#include <stdio.h>

void Array1DPrint(const unsigned char Arr[] ,const unsigned int Len);
void Array2DPrint(const unsigned char Arr[][30] ,const unsigned int Len);

int main(){
    unsigned char Array1[][30] = {"saher ayman hassaballa",
                                    "mohamed ahmed hasssan",
                                    "said said mohamed"};
    unsigned char Array2[] ={"saher love you ,baby"} ;

    Array1DPrint(Array2 , sizeof(Array2)/sizeof(Array2[0])) ;
    Array2DPrint(Array1 , 3);
}


void Array1DPrint(const unsigned char Arr[] ,const unsigned int Len)
{
    for(int i = 0 ; i < Len ; i++){
        printf("%c" ,Arr[i]);
    }
    printf("\n");
}

void Array2DPrint(const unsigned char Arr[][30] ,const unsigned int Len)
{
    for(int i = 0 ; i < Len ; i++){
        printf("%s \n" ,Arr[i]);
    }
}