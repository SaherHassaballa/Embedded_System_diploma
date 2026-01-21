#include <stdio.h>

typedef struct {
    unsigned int Pin0 : 1;
    unsigned int Pin1 : 1;
    unsigned int Pin2 : 1;
    unsigned int Pin3 : 1;
    unsigned int Pin4 : 1;
    unsigned int Pin5 : 1;
    unsigned int Pin6 : 1;
    unsigned int Pin7 : 1;
} port_t;

typedef union
{
    struct {
        unsigned char Pin0 : 1;
        unsigned char Pin1 : 1;
        unsigned char Pin2 : 1;
        unsigned char Pin3 : 1;
        unsigned char Pin4 : 1;
        unsigned char Pin5 : 1;
        unsigned char Pin6 : 1;
        unsigned char Pin7 : 1;
    };
    unsigned char AllPort;
    
}PortUnion;


int main(){
    port_t PortD ; // it's 
    printf("the size of PortD : %i \n", sizeof(PortD));
    PortD.Pin0 = 1;
    PortD.Pin1 = 1;
    PortD.Pin2 = 1;
    printf("the value : %d \n", PortD);
    PortUnion PortB ;

    PortB.AllPort = 0xff; // all 8 bit = 1 so convert to decimal will be 255
    printf("the value : %d \n", PortB);
    printf("the value of bit(0): %d \n", PortB.Pin0);

}