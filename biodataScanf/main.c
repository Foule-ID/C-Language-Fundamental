#include <stdio.h>

int main() {
    char nama[50];
    int umur;
    char alamat[100];
    char hobi[50];

    printf("=== PROGRAM BIODATA ===\n");

    printf("Masukkan nama: ");
    scanf(" %[^\n]", nama);  // baca string dengan spasi

    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("Masukkan alamat: ");
    scanf(" %[^\n]", alamat);  // baca string dengan spasi

    printf("Masukkan hobi: ");
    scanf(" %[^\n]", hobi);

    printf("\n=== HASIL BIODATA ===\n");
    printf("Nama   : %s\n", nama);
    printf("Umur   : %d tahun\n", umur);
    printf("Alamat : %s\n", alamat);
    printf("Hobi   : %s\n", hobi);

    return 0;
}
