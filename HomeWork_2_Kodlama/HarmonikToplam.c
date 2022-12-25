#include<stdio.h>
int main(){

int Sayac=2,Sayi,Pay=1;
float Toplam=1.0,Islem=0.0;

printf("Dongunun Kac Kere Tekrarlanacagini Giriniz:");
scanf("%d",&Sayi);

while(Sayac<=Sayi){

    Islem = Pay/Sayac;
    Toplam = Toplam+Islem;
    printf("Toplam:%f",Toplam);

    Sayac++;
}

    return 0;
}