#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[50];
    int umur;
    float bb;
    float tinggiBadan;

    printf("masukan nama anda : ");
    gets(nama);

    printf("masukan umur anda : ");
    scanf("%d", &umur);

    printf("Masukan berat badan anda : ");
    scanf("%f", &bb);

    printf("Masukan tinggi badan anda : ");
    scanf("%f", &tinggiBadan);

    printf("=====Biodata anda =====\n");
    printf("nama anda : %s\n", nama);
    printf("umur anda : %d\n", umur);
    printf("berat badan anda : %.1f\n", bb);
    printf("tinggi bada anda : %.1f", tinggiBadan);
    printf("\n=======================");
    return 0;
}
