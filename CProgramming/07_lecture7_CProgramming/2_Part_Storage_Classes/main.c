#include <stdio.h>

//using storage classes (auto , register , extern static)

extern int state ; // extern from outer file
static int alt = 10 ; // cant access out of this file cant in project scope the function is the same
int main(void){
    auto int num1 = 10 ; /// any local var is automatic by default and via vas (its mean seen by his scope only)
    register int speed = 20 ; /// also for local only and may apply or not depend on compiler using registers
    static int ArmAngle = 30 ; //static with local become global but seen in his scope storage in .data section in rom and ram as global var his value not reinitialized until restart programe

}