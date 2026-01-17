// array
#include <stdio.h>

int main()
{
    unsigned int arr[5] = {0x99 , 0x33 , 0x44 , 0x66 , 0x55};
    unsigned int element = 0x23 ;
    printf("element : 0X%X \n" , element);
    arr[5] = 0x24 ; // arraty access element unbounded by it and this make change in var in this location
    printf("element : 0X%X \n" , element);
    for(int i =0 ; i<5 ; i++){
        printf("element : 0X%X \n" , arr[i]);
    }
    printf("enter 5 elements :\n");
    for(int i =0 ; i<5 ; i++){
        scanf(" %u" , &arr[i]); // using \n here is not usefull in scanf is implicit so using it will make you scan more one element take care 
        // you can scan elememt in on line by sperate all by space or each one in line by use enter
    }
    for(int i =0 ; i<5 ; i++){
        printf("element : 0X%X \n" , arr[i]);
    }
    char name[20] ;
    printf("enter you name1 :") ;
    scanf("%9s" , name);
    int count = 0 ;
    while(name[count] != '\0'){
        printf("%c" , name[count]);
        count++;
    }
    printf("\n");
    
    printf("enter your name2 : \n");
    scanf("%9s", name);
    printf("name: %s \n" , name);
    /* clean buffer */
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    /*----------------------------*/

    printf("enter your name fgets : \n");
    fgets(name , sizeof(name) , stdin);
    printf("name: %s \n" , name);


}