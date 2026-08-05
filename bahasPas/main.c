#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

// =======================
//     BANGUN DATAR
// =======================

// Luas
float luasPersegi(float s) { return s * s; }
float luasPersegiPanjang(float p, float l) { return p * l; }
float luasSegitiga(float a, float t) { return 0.5 * a * t; }
float luasLingkaran(float r) { return 3.14 * r * r; }

// Keliling
float kelilingPersegi(float s) { return 4 * s; }
float kelilingPersegiPanjang(float p, float l) { return 2 * (p + l); }
float kelilingSegitiga(float a, float b, float c) { return a + b + c; }
float kelilingLingkaran(float r) { return 2 * 3.14 * r; }

// =======================
//      BANGUN RUANG
// =======================

// Volume
float volumeKubus(float s) { return s * s * s; }
float volumeBalok(float p, float l, float t) { return p * l * t; }
float volumePrisma(float luasAlas, float tinggi) { return luasAlas * tinggi; }
float volumeTabung(float r, float t) { return 3.14 * r * r * t; }
float volumeLimas(float luasAlas, float tinggi) { return (luasAlas * tinggi) / 3; }
float volumeKerucut(float r, float t) { return (3.14 * r * r * t) / 3; }
float volumeBola(float r) { return (4 * 3.14 * r * r * r) / 3; }

// =======================
//     MENU UTAMA
// =======================
int main() {
    int pilih;
    float a, b, c, t, r;

    printf("=== PROGRAM BANGUN DATAR & RUANG ===\n");
    printf("1. Luas Persegi\n");
    printf("2. Keliling Persegi\n");
    printf("3. Luas Persegi Panjang\n");
    printf("4. Keliling Persegi Panjang\n");
    printf("5. Luas Segitiga\n");
    printf("6. Keliling Segitiga\n");
    printf("7. Luas Lingkaran\n");
    printf("8. Keliling Lingkaran\n");
    printf("9. Volume Kubus\n");
    printf("10. Volume Balok\n");
    printf("11. Volume Tabung\n");
    printf("12. Volume Kerucut\n");
    printf("13. Volume Bola\n");
    printf("14. Volume Prisma (butuh luas alas)\n");
    printf("15. Volume Limas (butuh luas alas)\n");
    printf("Pilih menu: ");
    scanf("%d", &pilih);

    switch(pilih) {

        case 1:
            printf("Masukkan sisi: ");
            scanf("%f", &a);
            printf("Luas Persegi = %.2f", luasPersegi(a));
            break;

        case 2:
            printf("Masukkan sisi: ");
            scanf("%f", &a);
            printf("Keliling Persegi = %.2f", kelilingPersegi(a));
            break;

        case 3:
            printf("Masukkan panjang & lebar: ");
            scanf("%f %f", &a, &b);
            printf("Luas Persegi Panjang = %.2f", luasPersegiPanjang(a, b));
            break;

        case 4:
            printf("Masukkan panjang & lebar: ");
            scanf("%f %f", &a, &b);
            printf("Keliling Persegi Panjang = %.2f", kelilingPersegiPanjang(a, b));
            break;

        case 5:
            printf("Masukkan alas & tinggi: ");
            scanf("%f %f", &a, &b);
            printf("Luas Segitiga = %.2f", luasSegitiga(a, b));
            break;

        case 6:
            printf("Masukkan sisi A, B, C: ");
            scanf("%f %f %f", &a, &b, &c);
            printf("Keliling Segitiga = %.2f", kelilingSegitiga(a, b, c));
            break;

        case 7:
            printf("Masukkan jari-jari: ");
            scanf("%f", &r);
            printf("Luas Lingkaran = %.2f", luasLingkaran(r));
            break;

        case 8:
            printf("Masukkan jari-jari: ");
            scanf("%f", &r);
            printf("Keliling Lingkaran = %.2f", kelilingLingkaran(r));
            break;

        case 9:
            printf("Masukkan sisi: ");
            scanf("%f", &a);
            printf("Volume Kubus = %.2f", volumeKubus(a));
            break;

        case 10:
            printf("Masukkan panjang, lebar, tinggi: ");
            scanf("%f %f %f", &a, &b, &c);
            printf("Volume Balok = %.2f", volumeBalok(a, b, c));
            break;

        case 11:
            printf("Masukkan jari-jari & tinggi: ");
            scanf("%f %f", &r, &t);
            printf("Volume Tabung = %.2f", volumeTabung(r, t));
            break;

        case 12:
            printf("Masukkan jari-jari & tinggi: ");
            scanf("%f %f", &r, &t);
            printf("Volume Kerucut = %.2f", volumeKerucut(r, t));
            break;

        case 13:
            printf("Masukkan jari-jari: ");
            scanf("%f", &r);
            printf("Volume Bola = %.2f", volumeBola(r));
            break;

        case 14:
            printf("Masukkan luas alas & tinggi: ");
            scanf("%f %f", &a, &t);
            printf("Volume Prisma = %.2f", volumePrisma(a, t));
            break;

        case 15:
            printf("Masukkan luas alas & tinggi: ");
            scanf("%f %f", &a, &t);
            printf("Volume Limas = %.2f", volumeLimas(a, t));
            break;

        default:
            printf("Menu tidak ada!");
    }

    return 0;
}
