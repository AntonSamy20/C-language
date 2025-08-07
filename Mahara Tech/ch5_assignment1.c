#include <stdio.h>
int max(int a, int b, int c, int d);
int min(int a, int b, int c, int d);
int main() {
    int a,b,c,d;
    printf("Enter four integers numbers: ");
    scanf("%d %d %d %d",&a, &b, &c, &d);
    printf("The Max: %d\n", max(a,b,c,d));
    printf("The Min: %d\n", min(a,b,c,d));
}
int max(int a, int b, int c, int d){
    if (a>=b && a>=c && a>=d){
        return a;
    }else if(b>=a && b>=c && b>=d){
        return b;
    }else if(c>=a && c>=b && c>=d){
        return c;
    }
    return d;
}
int min(int a, int b, int c, int d){
    if (a<=b && a<=c && a<=d){
        return a;
    }else if(b<=a && b<=c && b<=d){
        return b;
    }else if(c<=a && c<=b && c<=d){
        return c;
    }
    return d;
}
