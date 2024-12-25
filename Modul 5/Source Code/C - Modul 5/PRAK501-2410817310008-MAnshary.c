#include<stdio.h>
int MaxBilangan(int a, int b, int c, int d){

    int maks = a;
    if (b>maks) maks = b;
    if (c>maks) maks = c;
    if (d>maks) maks = d;
    return maks;
}
int main(){
int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("%d", MaxBilangan(a, b, c, d));
return 0;
}