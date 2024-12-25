#include<stdio.h>
int main(){
    int bil;

    printf("Masukkan Nilai Anda: ");
    scanf("%d", &bil);
if(bil>=1 && bil<=9){
    printf("Satuan");
}
else if(bil==10 || bil>=20 && bil<=99){
    printf("Puluhan");
}
else if(bil>=11 && bil<=19){
    printf("Belasan");
}
else if(bil==0){
    printf("Nol");
}
else{
    printf("Anda Menginput Melebihi Limit Bilangan");
}
}