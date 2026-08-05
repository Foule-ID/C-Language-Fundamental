#include <stdio.h>

int main() {
    float r, luas; // r = jari-jari, luas = hasil perhitungan
    const float phi = 3.14;

    printf("=== Program Menghitung Luas Lingkaran ===\n");
    printf("Masukkan jari-jari lingkaran (cm): ");
    scanf("%f", &r);

    luas = phi * r * r;

    printf("\nLuas lingkaran = %.2f cm^2\n", luas);

    return 0;
}
