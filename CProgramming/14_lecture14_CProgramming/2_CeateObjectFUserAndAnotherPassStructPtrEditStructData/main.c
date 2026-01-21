#include <stdio.h>

typedef struct
{
    unsigned char Name[40];
    unsigned int Age ;
    unsigned int ID ;
    float Degree ;
} std;

std saher = {"saher ayman mounir ali hassaballa",
            21,
            24,
            100};

void print_std1(void);
void print_std2(std *PtrStd);

int main(){
    std mohammed = {"mohammed ayman mounir ali",
            25,
            30,
            90};

    std *Ptr_M = &mohammed;
    
    print_std1();
    printf("=======================\n");
    print_std2(&mohammed);
    printf("=======================\n");
    printf("enter name : ");
    scanf("%s" ,&(Ptr_M->Name));
    fflush(stdin); // not stander in c fuck use it dont work here just like toy
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    printf("enter name : ");
    gets(mohammed.Name);
    printf("enter age : ");
    scanf("%i" , &mohammed.Age);
    printf("enter id : ");
    scanf("%i" , &mohammed.ID);
    printf("enter degree : ");
    scanf("%f" , &mohammed.Degree);
    printf("\n=======================\n");
    print_std2(&mohammed);

}


void print_std1(void){
    printf("my name is : %s \n" , saher.Name);
    printf("my age is : %i \n" , saher.Age);
    printf("my id is : %i \n" , saher.ID);
    printf("my degree is : %f \n" , saher.Degree);    
}

void print_std2(std *PtrStd){
    //PtrStd-> element this the right way to access element from struct pointer
    printf("my name is : %s \n" ,(PtrStd->Name)); 
    printf("my age is : %i \n" , (PtrStd->Age));
    printf("my id is : %i \n" , (PtrStd->ID));
    printf("my degree is : %f \n" , (PtrStd->Degree));       
}
