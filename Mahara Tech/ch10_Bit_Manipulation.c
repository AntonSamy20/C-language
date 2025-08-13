#include<stdio.h>
#define Set_BIT(x,n)     ((x) |= (1 << (n)))
#define Clr_BIT(x,n)     ((x) &= ~(1 << (n)))
#define Toggle_BIT(x,n)  ((x) ^= (1 << (n)))


int main(){
    unsigned int num = 0; // 0000
    // Set bit 1
    Set_BIT(num, 1); // 0010
    printf("After setting bit 1: %u\n", num);

    // Toggle bit 0
    Toggle_BIT(num, 0); // 0011
    printf("After toggling bit 0: %u\n", num);

    // Clear bit 1
    Clr_BIT(num, 1); // 0001
    printf("After clearing bit 1: %u\n", num);

    return 0;
}

