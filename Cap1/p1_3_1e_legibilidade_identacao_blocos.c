#include <stdio.h>


int main ()
{
    int a=15, b=20;

    if(a<b)
        printf("%d\n", __LINE__);
        if(a%2==0)
            printf("%d\n", __LINE__);
    else
        printf("%d\n", __LINE__);

    return 0;
}
