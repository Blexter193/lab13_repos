#include <stdio.h>
#include "conio.h"

#define _CRT_SECURE_NO_WARNINGS
#define z -4
#define SQR(x) (x)*(x)
#define MIN(x,y) (x)<(y))?(x):(y)
#define MAX(x,y) (x)A>(y))?(x):(y)
#define PRINTI(w) puts("control output"); \
 printf(#w"=%d\n",w)
#define PRINTR(w) puts ("rezult :"); \
 printf (#w"=%f\n",(float)w)

int main()
{
    puts("Lab_13_2_1 Using macros and preprocessing directive");
    int x, y, w1, w2, minimum, maximum;
    char ch;
    do
    {
#if (0<z && z<5)
        puts("define minimum of two numbers");
        puts("Input 3 integer numbers");
        scanf("%d", &x);
        PRINTI(x);
        scanf("%d", &y);
        PRINTI(y);
        w1 = (x*x + y + z);
        w2 = (x*x + (y+z)*(y+z));
        PRINTI(x*x + y + z);
        PRINTI(x*x + (y+z)*(y+z));
        maximum = MAX(w1, w2);
        PRINTR(maximum);
        
#else
        if (0>=z && z>=5)
        {
            puts("define maximum of two numbers");
            puts("Input 3 integer numbers");
            scanf("%d", &x);
            PRINTI(x);
            scanf("%d", &y);
            PRINTI(y);
            w1 = (x * y * z);
            w2 = (x * y);
            PRINTI(x * y * z);
            PRINTI(x * y);
            minimum = MIN(w1, w2);
            PRINTR(minimum);
        }
#endif
        puts("Repeat? y /n "); ch = getch();
      } while (ch == 'y');
    return 0;
}


