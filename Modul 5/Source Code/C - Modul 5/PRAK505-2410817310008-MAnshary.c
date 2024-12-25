#include<stdio.h>
    
void Biodata(int tahunLahir, char Nama[], char Asal[]){
    int tahun_sekarang = 2020;
    int umur = tahun_sekarang - tahunLahir;
        printf("Perkenalkan Nama Saya : %s\n", Nama);
        printf("Umur Saya : %d\n", umur);
        printf("Saya Adalah Angkatan : 2020\n");
        printf("Asal Saya dari : %s\n", Asal);
}

int main(){
    int tahunLahir;
    char Nama[20], Asal[15];
        scanf("%d", &tahunLahir);
        scanf("%s", Nama);
        scanf("%s", Asal);
        Biodata(tahunLahir, Nama, Asal);
    return 0;
}