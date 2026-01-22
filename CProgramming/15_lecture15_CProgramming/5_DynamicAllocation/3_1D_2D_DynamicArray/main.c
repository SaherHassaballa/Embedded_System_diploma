#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int Enter = 0 ;
    unsigned int *PtrToArray = NULL ;
    printf("Enter array length : ");
    scanf("%u" , &Enter);
    printf("\n");
    /*create dynamic 1D array*/
    PtrToArray = (unsigned int *)malloc(Enter * sizeof(unsigned int));
    
    for(int i = 0 ; i < Enter ; i++){
        printf("Enter Element [%i] : " , i);    
        scanf("%i" , &PtrToArray[i]);
    }
     printf("the array : [ ");
    for(int i = 0 ; i < Enter ; i++){
        printf("%i " , PtrToArray[i]);
    }
        printf("] \n");

    /*create dynamic 2D array*/
    /*first allocate for pointers (rows) each one point to his colums (element)*/

    unsigned int Rows = 0 ;
    unsigned int Columns = 0 ;

    unsigned int **PtrToArrayRows = NULL ;
    unsigned int *PtrToArrayColumns = NULL ;

    printf("Enter array Rows : ");
    scanf("%u" , &Rows);
    printf("\n");
    /*create dynamic 2D array*/
    PtrToArrayRows = (unsigned int **)malloc(Enter * sizeof(unsigned int));
    
    printf("Enter array Columns : ");
    scanf("%u" , &Columns);
    printf("\n");
    
    for(int i = 0 ; i < Rows ; i++){
        PtrToArrayRows[i] = (unsigned int *)malloc(Columns * sizeof(unsigned int));
    }

    for(int i = 0 ; i < Rows ; i++){
        for(int j = 0 ; j < Columns ; j++){
            printf("Enter Element [%i][%i] : " , i , j);    
            scanf("%i" , &PtrToArrayRows[i][j]);
        }
    }

    for(int i = 0 ; i < Rows ; i++){
        for(int j = 0 ; j < Columns ; j++){
            printf("%i " , PtrToArrayRows[i][j]);    
        }
        printf("\n");    
    }
    /*after finish i will free all allocate space*/
    /*for 1D it easy just*/
    free(PtrToArray);

    /*for 2D you wanna first deallocate columns in each row then then deallocate rows*/
    for(int i = 0 ; i < Rows ; i++){
        free(PtrToArrayRows[i]);
    }

    free(PtrToArrayRows);

}