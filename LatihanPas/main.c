#include <stdio.h>
#include <stdlib.h>

#define KURS 106

void yenToIdr(double yen) {
    double hasil = yen * KURS;
    printf("Hasil: Rp%.2f\n", hasil);
}

void idrToYen(double idr) {
    double hasil = idr / KURS;
    printf("Hasil: ¥%.2f\n", hasil);
}

int main() {
    double yen, idr;
    int pilih;

    printf("=== Menu Konversi ===\n");
    printf("1. Yen -> IDR\n");
    printf("2. IDR -> Yen\n");
    printf("Pilihan: ");
    scanf("%d", &pilih);

    switch (pilih) {
        case 1:
            printf("Masukkan jumlah Yen: ");
            scanf("%lf", &yen);
            yenToIdr(yen);
            break;

        case 2:
            printf("Masukkan jumlah IDR: ");
            scanf("%lf", &idr);
            idrToYen(idr);
            break;

        default:
            printf("Pilihan ga valid.\n");
            break;
    }

    return 0;
}
