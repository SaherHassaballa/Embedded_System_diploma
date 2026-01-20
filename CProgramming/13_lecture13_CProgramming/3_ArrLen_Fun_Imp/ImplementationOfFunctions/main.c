#include <stdio.h>

void *MyMemset(unsigned char *destnation, unsigned char character, unsigned int Length);
void *MyMemcopy(unsigned char *destnation, unsigned char *source, unsigned int Length);
signed int MyMemcmp(unsigned int *FirstTerm ,unsigned int *SecondTerm ,  unsigned int Length);


int main(){
    unsigned char MyName[20] = {"saher ayman"};
    unsigned int FirstArray[] = {1,2,3,4,5,6};
    unsigned int SecondArray[] = {5,2,3,4,5,6};
    
    unsigned char YourName[20] ;
    MyMemcopy(YourName , MyName , 10);
    printf("the memcopy result is : %s \n" , YourName);    
    MyMemset(MyName , '3' , 11);   
    printf("the memset result is : %s \n" , MyName);
    printf("====================");
    if(MyMemcmp(FirstArray , SecondArray , 3) == 0){
        printf("both are same\n");
    }else if (MyMemcmp(FirstArray , SecondArray , 3)< 0)
    {
        printf("first is smallest\n");
    }else{
        printf("first is largest\n");
    }
    

    //MyName[20] = {"saher ayman"}; // not allowed in c fuck you should use functions to copy string in array of char for you after define are
}


void *MyMemset(unsigned char *destnation, unsigned char character, unsigned int Length){
    unsigned char *CopyOfDes = destnation ; 
    if(CopyOfDes == NULL){
        printf("memset function failed due to NULL pointer !!!");
    }else{
        while(Length--)
        {
            *CopyOfDes++ = character;
        }
    }
    return destnation ;
}


void *MyMemcopy(unsigned char *destnation, unsigned char *source, unsigned int Length){
    unsigned char *CopyOfDes = destnation ; 
    unsigned char *CopyOfSrc = source ; 
    if(CopyOfDes == NULL){
        printf("memset function failed due to NULL pointer !!!");
    }else{
        while(Length--)
        {
            *CopyOfDes++ = *CopyOfSrc++;
        }
    }
    return destnation ;
}


signed int MyMemcmp(unsigned int *FirstTerm ,unsigned int *SecondTerm ,  unsigned int Length){
    signed int CompareState = 0;
    if(FirstTerm == NULL || SecondTerm == NULL){
        printf("in MyMemcmp NULL pointer pass. \n");
    }else{
        if(FirstTerm == SecondTerm){
            return CompareState;
        }else{
            while (Length --)
            {   
                if(*FirstTerm == *SecondTerm){
                    FirstTerm += 1 ;
                    SecondTerm += 1;
                    continue;
                }else{
                    CompareState = (*FirstTerm++ < *SecondTerm++) ? -1 : 1;
                }  
            } 
        }
    }
    return CompareState ;
}
