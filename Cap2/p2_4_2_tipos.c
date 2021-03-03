#include <stdio.h>

struct data{
    int d, m, a;
};

void exibe(struct data dt)	/* Em C o nome do tipo é "struct data" e não apenas "data" comos seria em C++ */
{
		printf("%02d/%02d/%04d\n", dt.d, dt.m, dt.a);
}

int main()
{
    struct data today;
    
    today.d = 10;
    today.m = 5;
    today.a = 2018;
    exibe(today);
    return 0;
}
