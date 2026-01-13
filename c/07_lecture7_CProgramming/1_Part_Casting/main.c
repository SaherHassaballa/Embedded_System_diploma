#include <stdio.h>

// there is two type of casting implicit (compiler dependent) , explicit
int main(){
    //implicit
    int integer = 0 ;
    float floting = 3.14 ;

    integer = floting ; // casting from float to intrger + data losses in fraction
    printf("assigned float 3.14 to int become : %i \n" , integer);

    //explicit

    unsigned int Num1 = 7 ;
    unsigned int Num2 = 2 ;
    float Res = 0 ;

    Res = Num1 / Num2 ;
    printf("Res = Num1 / Num2 with implicit casting : %f \n" , Res);

    Res = (float)Num1 / Num2 ;
    printf("Res = (float) Num1 / Num2 with Explicit casting : %f \n" , Res);

    // ignore using implicit casting make it youself

}