#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hello(){
 printf("Hello Everyone\n");
}

void welcome(char name[]){
printf("%s\n", name);
}

void showNumber(int number,int age){
printf("number :%d age:%d\n",number ,age);
}

void profile(char nama[], int umur , float bb){
printf("nama anda : %s umur anda : %d bb anda : %.1f\n",nama ,umur ,bb);
}

void LuasLingkaran(float jariJari){
 float luas  = 3.14 * jariJari * jariJari;
 printf("hasil = %4.f\n",luas );
}

void LuasSegiTiga(float alas, float tinggi){
float luas = 0.5 * alas * tinggi;
printf("hasil = %f\n",luas);
}

void BMI(float tinggi, float bb){
 float hasil = bb / (tinggi * tinggi);
 printf("Hasil BMI : %f\n",hasil);
}

 float LuasLingkaranReturn(float jariJari){
 float luas  = 3.14 * jariJari * jariJari;
 return luas;
}

 float BMIReturn(float tinggi, float bb){
 float hasil = bb / (tinggi * tinggi);
 return hasil;

int main(){
    hello();
    welcome("bla bla");
    showNumber(15, 9);
    profile("Arhaqi fadilgaffari",15 ,55);
    LuasLingkaran(7);
    LuasSegiTiga(1,2);
    BMI(1.67,55);

    printf("hasil luas = %.3f\n", LuasLingkaranReturn(9));

    printf("hasil BMI = %f\n", BMIReturn(70.2,16.2));

    return 0;
}
