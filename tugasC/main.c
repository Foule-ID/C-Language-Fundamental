#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[50];
    char alamat[100];
    char sekolah[100];
    int umur;

    printf("Masukkan nama kamu: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan umur kamu: ");
    scanf("%d", &umur);
s
    printf("\nNama ku adalah :%s", nama);
    printf("Umur kamu %d tahun\n", umur);

    return 0;
}
