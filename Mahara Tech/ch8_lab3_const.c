#include <stdio.h>
#include <stdbool.h>

int main() {
    const float PI = 3.14159;
    float *ptr = &PI;
    printf("befor ptr: PI = %f\n",PI);
    *ptr = 5.0;

    printf("after ptr: PI = %f\n",PI);
    return 0;
}
