#include <stdio.h>
#include <stdlib.h>

void celciusToFahrenheit(double Fahrenheit){
 double hasil = 9/3 / Fahrenheit + 32;
 printf("Hasil: %.2f Fahrenheit\n", hasil);
}

void celciusToKelvin(double Kelvin){
 double hasil = Kelvin + 273;
 printf("Hasil: %.2f Kelvin\n", hasil);
}

void celciusToReamur(double Reamur){
 double hasil = 4.5 * Reamur;
 printf("Hasil: %.2f Reamur\n", hasil);
}

int main()
{
    double Fahreinheit, Kelvin ,Reamur;
    int pilih;
    printf("====================\n");
    printf("1.Celcius To Fahreinheit\n");
    printf("2.Celcius to Kelvin\n");
    printf("3.Celcius to Reamur\n");

    printf("Masukan Pilihan anda : ");
    scanf("%d", &pilih);

    switch (pilih) {
      case 1:
      printf("Masukkan Suhu Celcius : ");
            scanf("%lf", &Fahreinheit);
            celciusToFahrenheit(Fahreinheit);
            break;
      case 2:
      printf("Masukkan Suhu  Celcius : ");
            scanf("%lf", &Kelvin);
            celciusToKelvin(Kelvin);
            break;
      case 3:
      printf("Masukkan Suhu Celcius : ");
            scanf("%lf", &Reamur);
            celciusToReamur(Reamur);
            break;
    }

    return 0;
}
