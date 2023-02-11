#include <stdio.h>
#define SQR(x) x * x

int main()
{
    int y = 5,x = y + 1;
    int z = SQR(x);

    printf("z = %d\n",z);

    return 0;
}