#include<stdio.h>
#include<stdbool.h>

int main(){
    int x;
    char z;
    float y;
    double k;
    bool c;
    long long xx;
    long double kk;
    

    printf("size of int                     %d byte\n",sizeof(x));
    printf("size of char                    %d byte\n",sizeof(z));
    printf("size of float                   %d byte\n",sizeof(y));
    printf("size of double                  %d byte\n",sizeof(k));
    printf("size of bool                    %d byte\n",sizeof(c));
    printf("size of long long int           %d byte\n",sizeof(xx));
    printf("size of long long double        %d byte\n",sizeof(kk));

}