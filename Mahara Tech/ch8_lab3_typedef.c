#include <stdio.h>
#include <stdint.h>
typedef uint8_t u8;
typedef uint32_t u32;
int main() {
    int x;
    u8 shrt;
    u32 lng;
    long long xx; 

    printf("The size of int:             %zu bytes\n", sizeof(x));
    printf("The size of short:           %zu bytes\n", sizeof(shrt));
    printf("The size of long:            %zu bytes\n", sizeof(lng));
    printf("The size of long long int:   %zu bytes\n", sizeof(xx));
    return 0;
}
