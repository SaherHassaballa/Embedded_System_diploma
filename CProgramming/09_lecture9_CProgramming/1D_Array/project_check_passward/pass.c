#include <stdio.h>
#include <string.h>

int main()
{
    unsigned char Password[] = "sa4";
    unsigned char Password_User[4];

    printf("Enter password (3 chars): ");
    scanf("%3s", Password_User);

    // for(int count = 0 ; count < 4 ; count++){
    //     scanf("%c" , &Password_User[count]);
    //     fflush(stdin);
    // }
    //or use if for check each element 
    if(strcmp((char*)Password, (char*)Password_User) == 0){
        printf("your password is correct\n");
    }else{
        printf("your password isn't correct\n");
    }

    return 0;
}

