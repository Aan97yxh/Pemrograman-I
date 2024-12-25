#include <stdio.h>
int main() {
    int jumlahRuangan;

    scanf("%d", &jumlahRuangan);

    int zetsu[jumlahRuangan];

    for (int i = 0; i < jumlahRuangan; i++) {
        scanf("%d", &zetsu[i]);
    }
    for (int i = 0; i < jumlahRuangan; i++) {
        int labelRuangan = i + 1;
        int jumlahZetsuSetelahMembelah = zetsu[i] * labelRuangan;
        printf("%d ", jumlahZetsuSetelahMembelah);
    }
    return 0;
}