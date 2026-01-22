#include <stdio.h>

union student
{
    unsigned int id;
    float degree;
};

typedef union
{
    unsigned int id;
    float degree;
}student_t;

int main(){
    //union members share the same memory, but are interpreted differently
    union student saher;
    saher.degree = 12;
    printf("my ID : %i\n",saher.id);
    saher.id = 10;
    printf("my Degree : %f\n",saher.degree);

    student_t *PtrToStudent;
    //student and student_t are different types, even if they have the same memory layout
    // PtrToStudent = &saher; 

    student_t Ahmed ;
    PtrToStudent = &Ahmed ;

    PtrToStudent->id =11 ;

    printf("my ID : %i\n",PtrToStudent->id);

}