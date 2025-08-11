#include <stdio.h>
#include <stdbool.h>

int main() {
    int x;
    long long xx; 
    float y;
    double yy;
    long double yyy;
    char c; 
    bool flag;

    printf("The size of int:             %zu bytes\n", sizeof(x));
    printf("The size of long long int:   %zu bytes\n", sizeof(xx));
    printf("The size of float:           %zu bytes\n", sizeof(y));
    printf("The size of double:          %zu bytes\n", sizeof(yy));
    printf("The size of long double:    %zu bytes\n", sizeof(yyy));
    printf("The size of char:            %zu bytes\n", sizeof(c));
    printf("The size of boolean:         %zu bytes\n", sizeof(flag));

    return 0;
}
