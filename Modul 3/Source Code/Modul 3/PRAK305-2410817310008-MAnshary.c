#include <stdio.h>
int main(){
    int totaldetik,sisadetik, detik, menit, jam, hari;

    printf("Masukkan jumlah detik: ");
    scanf("%d", &totaldetik);

    hari = totaldetik / 86400;
    sisadetik = totaldetik % 86400;
    jam = sisadetik / 3600;
    sisadetik %= 3600;
    menit = sisadetik / 60;
    detik = sisadetik % 60;

if(hari>0){
    printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
}
else{
    printf("%02d:%02d:%02d", jam, menit, detik);
}
return 0;
}