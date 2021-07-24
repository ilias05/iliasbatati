#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, x=0, r;
    num=2;
    while(x<11) {
        r=num*x;
        printf("\n %d * %d = %d \n", num,x,r);
    x++;}

    return 0;
}
