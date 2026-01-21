#include <stdio.h>

int main(){
    typedef struct
    {
        char var1;
        double var2;
        char var3;
        unsigned int var4 ;
    }TestStruct1;

    typedef struct
    {
        double var2;
        unsigned int var4 ;
        char var1;
        char var3;
    }TestStruct2;


    // using packing number is very import detect a nubmer of padding can occour if use 1 mean no pading will occour if 4 mean may 0 to 3 pading may ocour 

    #pragma pack(1)
    typedef struct
    {
        double var2;
        char var1;
        unsigned int var4 ;
        char var3;
    }TestStruct3;
    #pragma pack(1)

    #pragma pack(2)
    typedef struct
    {
        double var2;
        char var1;
        unsigned int var4 ;
        char var3;
    }TestStruct4;
    #pragma pack(2)

    #pragma pack(8)
    typedef struct
    {
        double var2;
        char var1;
        unsigned int var4 ;
        char var3;
    }TestStruct5;
    #pragma pack(8)

    TestStruct1 Test1 ;
    TestStruct2 Test2 ;
    TestStruct3 Test3 ;
    TestStruct4 Test4 ;
    TestStruct5 Test5 ;



    printf("the size of struct with padding : %i\n" , sizeof(Test1));
    printf("the size of struct with padding but order by size bigger first : %i \n" , sizeof(Test2));
    printf("the size of struct with paking by 1 : %i \n" , sizeof(Test3));
    printf("the size of struct with paking by 2 : %i \n" , sizeof(Test4));
    printf("the size of struct with paking by 8: %i \n" , sizeof(Test5));

    
}