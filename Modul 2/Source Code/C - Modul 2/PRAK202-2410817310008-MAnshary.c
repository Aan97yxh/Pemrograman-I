#include <stdio.h>

int main(){
float a, b, c, d;

    //case 1
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &b);
    printf("\n");

    printf("Hasil dari penjumlahan nilai pertama \"%.f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", a, b, a + b);

    //case 2
    printf("\nMasukkan Nilai Pertama : ");
    scanf("%f", &c);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &d);
    printf("\n");

    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", c, d, c + d);
 return 0;
}