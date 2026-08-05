#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[50];
     printf("masukan nama anda : ");
     gets(nama);

    int Jual;
     printf("Jumlah Produk terjual : ");
     scanf("%d", &Jual);

    int bonus;

    printf("-----------------------------\n");

    printf("NAMA KARYAWAN : %s\n", nama);
    printf("GAJI POKOK : $300\n");

    if(Jual < 10){
        bonus = 0;
        printf("Bonus : $0\n");
    } else if(Jual < 50){
        bonus = 50;
        printf("Bonus : $50\n");
    } else if(Jual > 50){
        bonus = 200;
        printf("Bonus : $200\n");
    }

    int Gaji = 300 + bonus;

    printf("Total : $%d", Gaji);

    return 0;
}
