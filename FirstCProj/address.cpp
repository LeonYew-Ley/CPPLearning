#include <stdio.h>

void test(int & i) {
    i = 1024;
}

int main()
{
    int x = 1;
    printf("x = %d\n", x);
    test(x);
    printf("x = %d\n", x);
    return 0;
}
