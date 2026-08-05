#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alas, tinggi ,luas;

    printf("masukan Alas segitiga : ");
    scanf("%f", &alas);

    printf("masukan Tinggi segitiga : ");
    scanf("%f  ", &tinggi);

    luas = 0.5 * alas * tinggi;

    printf("hasil Luas segitiga : %.2f\n", luas);

    return 0;
}
