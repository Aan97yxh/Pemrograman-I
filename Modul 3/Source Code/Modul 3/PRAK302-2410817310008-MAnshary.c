#include<stdio.h>
int main(){
    int bil;

    printf("Masukkan nilai ");
    scanf("%d", &bil);
if (bil>=80){
    printf("A");
}
else if(bil>=70){
    printf("B");
}
else if(bil>=60){
    printf("C");
}
else if(bil>=50){
    printf("D");
}
else{
    printf("E");
}
return 0;
}