#include <stdio.h>
#include <stdlib.h>

#define PHI 3.141592653589793

// ------- Function Volume ------- //
double volumeKubus(double s) {
    return s * s * s;
}

double volumeBalok(double p, double l, double t) {
    return p * l * t;
}

double volumeBola(double r) {
    return (4.0 / 3.0) * PHI * r * r * r;
}

double volumeTabung(double r, double t) {
    return PHI * r * r * t;
}

double volumeKerucut(double r, double t) {
    return (1.0 / 3.0) * PHI * r * r * t;
}

double volumePrismaSegitiga(double alas, double tinggiSegitiga, double tinggiPrisma) {
    return (0.5 * alas * tinggiSegitiga) * tinggiPrisma;
}

// ------- Main Program ------- //
int main() {
    int pilih;
    double s, p, l, t, r, alas, tinggiSegitiga, tinggiPrisma;

    printf("=== Program Volume Bangun Ruang ===\n");
    printf("1. Kubus\n");
    printf("2. Balok\n");
    printf("3. Bola\n");
    printf("4. Tabung\n");
    printf("5. Kerucut\n");
    printf("6. Prisma Segitiga\n");
    printf("Pilih: ");
    scanf("%d", &pilih);

    switch (pilih) {

        case 1:
            printf("Masukkan sisi: ");
            scanf("%lf", &s);
            printf("Volume Kubus = %.2f\n", volumeKubus(s));
            break;

        case 2:
            printf("Masukkan panjang: ");
            scanf("%lf", &p);
            printf("Masukkan lebar: ");
            scanf("%lf", &l);
            printf("Masukkan tinggi: ");
            scanf("%lf", &t);
            printf("Volume Balok = %.2f\n", volumeBalok(p, l, t));
            break;

        case 3:
            printf("Masukkan jari-jari bola: ");
            scanf("%lf", &r);
            printf("Volume Bola = %.2f\n", volumeBola(r));
            break;

        case 4:
            printf("Masukkan jari-jari tabung: ");
            scanf("%lf", &r);
            printf("Masukkan tinggi tabung: ");
            scanf("%lf", &t);
            printf("Volume Tabung = %.2f\n", volumeTabung(r, t));
            break;

        case 5:
            printf("Masukkan jari-jari kerucut: ");
            scanf("%lf", &r);
            printf("Masukkan tinggi kerucut: ");
            scanf("%lf", &t);
            printf("Volume Kerucut = %.2f\n", volumeKerucut(r, t));
            break;

        case 6:
            printf("Masukkan alas segitiga: ");
            scanf("%lf", &alas);
            printf("Masukkan tinggi segitiga: ");
            scanf("%lf", &tinggiSegitiga);
            printf("Masukkan tinggi prisma: ");
            scanf("%lf", &tinggiPrisma);
            printf("Volume Prisma Segitiga = %.2f\n",
                   volumePrismaSegitiga(alas, tinggiSegitiga, tinggiPrisma));
            break;

        default:
            printf("Pilihan kagak valid bro 😭\n");
            break;
    }

    return 0;
}
