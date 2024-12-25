#include <stdio.h>

int main() {
    int pilihan;
    float a, b, hasil;

    do {
        printf("Pilih program:\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &a);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &b);
        }

        switch (pilihan) {
        case 1: hasil = a + b; printf("Hasil Penjumlahan: %.2f\n", hasil); break;
        case 2: hasil = a - b; printf("Hasil Pengurangan: %.2f\n", hasil); break;
        case 3: hasil = a * b; printf("Hasil Perkalian: %.2f\n", hasil); break;
        case 4: hasil = a / b; printf("Hasil Pembagian: %.2f\n", hasil); break;
        case 5: printf("Terimakasih, telah menggunakan kalkulator!\n"); break;
        default: printf("Input salah, coba lagi.\n");
        }
    } while (pilihan != 5);

    return 0;
}