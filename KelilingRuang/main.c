#include <stdio.h>
#include <stdlib.h>

#define PHI 3.141592653589793

// -------- Rumus Luas Permukaan -------- //
double lpKubus(double s) {
    return 6 * s * s;
}

double lpBalok(double p, double l, double t) {
    return 2 * (p*l + p*t + l*t);
}

double lpBola(double r) {
    return 4 * PHI * r * r;
}

double lpTabung(double r, double t) {
    return (2 * PHI * r * t) + (2 * PHI * r * r);
}

double lpKerucut(double r, double s) {
    return (PHI * r * s) + (PHI * r * r);
}

// Prisma segitiga (Luas = luas alas + luas atap + jumlah keliling alas * tinggi)
double lpPrismaSegitiga(double a, double b, double c, double tinggi) {
    double kel = a + b + c;
    double luasAlas = 0.5 * a * b;
    return (2 * luasAlas) + (kel * tinggi);
}

// -------- Main Program -------- //
int main() {
    int pilih;
    double s, p, l, t, r, miring, a, b, c, tinggi;

    printf("=== Program Luas Permukaan Bangun Ruang ===\n");
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
            printf("Masukkan sisi kubus: ");
            scanf("%lf", &s);
            printf("Luas Permukaan Kubus = %.2f\n", lpKubus(s));
            break;

        case 2:
            printf("Masukkan panjang: ");
            scanf("%lf", &p);
            printf("Masukkan lebar: ");
            scanf("%lf", &l);
            printf("Masukkan tinggi: ");
            scanf("%lf", &t);
            printf("Luas Permukaan Balok = %.2f\n", lpBalok(p,l,t));
            break;

        case 3:
            printf("Masukkan jari-jari bola: ");
            scanf("%lf", &r);
            printf("Luas Permukaan Bola = %.2f\n", lpBola(r));
            break;

        case 4:
            printf("Masukkan jari-jari tabung: ");
            scanf("%lf", &r);
            printf("Masukkan tinggi tabung: ");
            scanf("%lf", &t);
            printf("Luas Permukaan Tabung = %.2f\n", lpTabung(r,t));
            break;

        case 5:
            printf("Masukkan jari-jari kerucut: ");
            scanf("%lf", &r);
            printf("Masukkan garis pelukis (miring): ");
            scanf("%lf", &miring);
            printf("Luas Permukaan Kerucut = %.2f\n", lpKerucut(r,miring));
            break;

        case 6:
            printf("Masukkan alas segitiga a: ");
            scanf("%lf", &a);
            printf("Masukkan alas segitiga b (tinggi segitiga): ");
            scanf("%lf", &b);
            printf("Masukkan sisi miring segitiga c: ");
            scanf("%lf", &c);
            printf("Masukkan tinggi prisma: ");
            scanf("%lf", &tinggi);
            printf("Luas Permukaan Prisma Segitiga = %.2f\n",
                   lpPrismaSegitiga(a,b,c,tinggi));
            break;

        default:
            printf("Pilihan tidak valid bro 😭\n");
    }

    return 0;
}

