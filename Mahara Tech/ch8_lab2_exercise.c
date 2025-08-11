#include <stdio.h>
#include <stdbool.h>

int main() {

    int x;
    short y;
    long l;
    long long xx; 

    printf("The size of int:             %zu bytes\n", sizeof(x));
    printf("The size of short:           %zu bytes\n", sizeof(y));
    printf("The size of long:            %zu bytes\n", sizeof(l));
    printf("The size of long long int:   %zu bytes\n", sizeof(xx));
    return 0;
}
