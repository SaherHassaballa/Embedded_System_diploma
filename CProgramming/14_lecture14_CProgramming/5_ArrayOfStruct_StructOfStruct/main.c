#include <stdio.h>

// array of struct + struct of struct

typedef struct
{
    unsigned char FName[40];
    unsigned char MName[40];
    unsigned char Address[40];
}student_Details_t;

typedef struct
{
    unsigned char SName[40];
    unsigned int ID;
    float Degree;
    student_Details_t Student_Details;
}student_t;



student_t Students[2]={{
        "saher ayman mounir ali hassaballa",
        24,
        100,
        "ayman",
        "hanna",
        "eg"
    },{
        "mohammed ahmed",
        20,
        200,
        "ayman",
        "hanna",
        "eg"
    }};



int main(){
        for(int i =0 ; i<2 ; i++){
            printf("the name is : %s\n", Students[i].SName);
            printf("the Degree is : %f\n", Students[i].Degree);
            printf("the Fname is : %s\n", Students[i].Student_Details.FName);
            printf("the MName is : %s\n", Students[i].Student_Details.MName);
            printf("the Address is : %s\n", Students[i].Student_Details.Address);
            printf("================================\n");
        }
}