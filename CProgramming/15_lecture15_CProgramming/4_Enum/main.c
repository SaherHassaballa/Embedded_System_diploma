#include <stdio.h>

enum Days{
    Sat,
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri
};

enum Days1{
    Sat1,
    Sun1,
    Mon1,
    Tue1,
    Wed1,
    Thu1,
    Fri1
};

int main(){
    enum Days Day = Sat;
    enum Days Day1 = 90;

    for(enum Days day = Sat ; day < Fri ;  day++){
        printf("done %i\n" , day);
    }

    switch (Mon)
    {
    case Sat:
        printf("iam sat day\n");
        break;
    case Fri:
        printf("iam Fri day\n");
        break;
    case Mon:
        printf("iam Mon day\n");
        break;
    default:
        break;
    }

    printf("Day : %i\n" , Day);
    printf("Day1 : %i\n" , Day1);

    printf("Size Of object Day from Days Enumerate : %lli\n" , sizeof(Day));

}