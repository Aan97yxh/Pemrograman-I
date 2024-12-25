#include<stdio.h>
int main(){
    int a, b;
    int total = 0;
     
    printf("");
    scanf("%d %d", &a, &b);

    for(int i=1; i<=a; i++){
        int hasil = 0;
        for(int j=i; j>=1; j--){
            printf("(%d * %d)", j, b);
            hasil += j*b;
        if(j>1)
            printf(" + ");
        }
        total += hasil;
        printf(" = %d\n", hasil);
    }
    printf("%d\n", total);
    return 0;
}