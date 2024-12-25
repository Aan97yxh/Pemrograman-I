#include<stdio.h>
int main(){
    int a, b;

    printf("");
    scanf("%d %d", &a, &b);

    if(a<b){
        for(int i=a, j=b; i<=b; i++, j--){
            if(i<b){
                printf("%d %d - ", i, j);
            }
            else{
                printf("%d %d", i, j);
            }
        }
    }
    else{
        for(int i=a, j=b; i>=b; i--, j++){
            if(i>b){
                printf("%d %d - ", i, j);
            }
            else{
                printf("%d %d", i, j);
            }
        }
    }
    return 0;
}