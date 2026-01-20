#include <stdio.h>

//Array with fixed length
unsigned char PrintArrat2D(unsigned int Arr[3][3]); // fixed array
//Array with fixed columns but various in rows
unsigned char PrintArrat2D_cols(unsigned int Arr[][3] , unsigned int rows);
// its not true to sent 2d array unknown his columns
/*
unsigned char PrintArrat2D_rows_cols(unsigned int Arr[][] , unsigned int rows);
*/
//Array with diff raw coulmn but should define rows and cols
void PrintArr2D(const unsigned rows, const unsigned int cols, const unsigned int Arr[rows][cols]); // i prefere this simple , clear and  usfull , is the best
//
unsigned char Print2DWithPtr(const unsigned int (*ptr)[3] , const unsigned int rows);
//
unsigned char Print2DWithPtr2(const unsigned int (*ptr)[3][3]);


unsigned int Numbers[3][3] ={{1,2,3},
                            {4,5,6},
                            {6,7,8}}; 

int main(){
    PrintArrat2D(Numbers);
    printf("============================\n");
    PrintArr2D(3,3 , Numbers);
    printf("============================\n");
    PrintArrat2D_cols(Numbers , 3);
    printf("============================\n");
    Print2DWithPtr(Numbers , 3); // its most amazing thing very sexy
}

unsigned char PrintArrat2D(unsigned int Arr[3][3]){
    unsigned char StateError = '0' ;
    for(int i = 0 ; i< 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%i " , Arr[i][j]);
        }
        printf("\n");
    }
    return StateError ;
}

unsigned char PrintArrat2D_cols(unsigned int Arr[][3] , unsigned int rows){
    printf("the best i know columns num only : \n");
    for(int i = 0 ; i < rows ; i++){
        printf("%i " , *(Arr[i] + 0)); //Arr[1] is the ptr to first element to current row so i can move to next ele in raw by add 1
        printf("%i " , *(Arr[i] + 1)); 
        printf("%i " , *(Arr[i] + 2)); 
        printf("\n");
    }
    return '0' ; 
}; 


void PrintArr2D(const unsigned rows, const unsigned int cols, const unsigned int Arr[rows][cols])
{
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%u ", Arr[i][j]);
        }
        printf("\n");
    }
}


unsigned char Print2DWithPtr(const unsigned int (*ptr)[3] , const unsigned int rows){
    unsigned char Error_State = 0;
    if(ptr == NULL){ // here its usfull to safe your programe from crach by add check if ptr refere to NULL to return error and dont execute function 
        Error_State = 1;
    }else{
        for(int i = 0 ; i < rows ; i++){
            printf("%i " , *(*(ptr + i)) +0); //ptr refer to first element in array like name of any array but he refer to array so move each add 1 one array like 2D array arr[3][3] and this like have arr[0] next will be next row arr[1]
            printf("%i " , *(*(ptr + i)) +1); //ptr +i like get the add off row i use * to derefrence and get address of  the 1D arr i so use index +0 ,1,2 to get certain element in current row and then * this address
            printf("%i " , *(*(ptr + i)) +2); 
            printf("\n");
        }
        printf("same same but diffrent ========== \n");
        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < 3 ; j++){ // 3 is the num of colums (*ptr)[num_columns]
                printf("%u ", ptr[i][j]);
            }
            printf("\n");
        }
    }
    return Error_State ;
}


unsigned char Print2DWithPtr2(const unsigned int (*ptr)[3][3]){
    unsigned char Error_State = 0;
    if(ptr == NULL){ // here its usfull to safe your programe from crach by add check if ptr refere to NULL to return error and dont execute function 
        Error_State = 1;
    }else{
        printf("same same but diffrent ========== \n");
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){ 
                printf("%u ", *(ptr)[i][j]); // here ptr refere to 2D arry now so *ptr this to get the 2D array starting address then travers on it 
                // in the above you refere to 1D array so it refere to the first row automatically
            }
            printf("\n");
        }
    }
    return Error_State ;
}