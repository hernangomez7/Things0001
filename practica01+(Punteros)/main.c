#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5;
    int*P;
    P=&x;
    *P=10;
    printf("%d\n",x);
    printf("%d\n",*P);

    //P==&x
    //*P==x



    return 0;
}
