#include <stdio.h>

void swap(void *a, void *b, int size);

int main()
{
    int x = 10, y = 20;
    float f1 = 1.5f, f2 = 3.5f;

    swap(&x, &y, sizeof(int));
    printf("%d %d\n", x, y);

    swap(&f1, &f2, sizeof(float));
    printf("%.1f %.1f\n", f1, f2);

    return 0;
}

void swap(void *a, void *b, int size)
{
    unsigned char temp;
    unsigned char *p1 = a;
    unsigned char *p2 = b;

    for(int i = 0; i < size; i++){
        temp = p1[i];
        p1[i] = p2[i];
        p2[i] = temp;
    }
}
