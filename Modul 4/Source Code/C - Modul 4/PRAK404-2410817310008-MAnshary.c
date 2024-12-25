#include<stdio.h>
int main(){
    int pilihan;
    float a, b, hasil; 

    while(pilihan != 5){
        printf("Pilih Program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if(pilihan==5){
            printf("Terimakasih telah menggunakan Kalkulator M.Anshary");
            break;
        }
        else if(pilihan>=1 && pilihan<=4){
            printf("Masukkan Nilai Pertama: ");
            scanf("%f", &a);
            printf("Masukkan Nilai Kedua: ");
            scanf("%f", &b);

            if(pilihan==1){
                hasil=a+b;
                printf("Hasil Penjumlahan antara %.2f dan %.2f adalah %.2f\n", a, b, hasil);
            }
            else if(pilihan==2){
                hasil=a-b;
                printf("Hasil Pengurangan antara %.2f dan %.2f adalah %.2f\n", a, b, hasil);
            }
            else if(pilihan==3){
                hasil=a*b;
                printf("Hasil Perkalian antara %.2f dan %.2f adalah %.2f\n", a, b, hasil);
            }
            else{
                if(b!=0){
                    hasil=a/b;
                    printf("Hasil Pembagian antara %.2f dan %.2f adalah %.2f\n", a, b, hasil);
                }
                else{
                    printf("Error: Pembagian dengan Nol.\n");
                }
            }
        }
        else{
            printf("Input anda salah, silahkan coba lagi.\n");
        }
    }
    return 0;
}