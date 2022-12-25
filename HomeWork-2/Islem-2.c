#include<stdio.h>
int main(){

    double Ortalama=0.0,Islem=0.0;
    float Toplam=1.0;
    int   Sayi,SayacFaktoriyel=2,Faktoriyel=1,Pay=1,Dongu,Sayac=0;

    printf("Dongunun Kac Kere Tekrarlanacagini Giriniz:");
    scanf("%d",&Dongu);
    printf("Bir Sayi Giriniz:");
    scanf("%d",&Sayi);

    Toplam=Toplam+Sayi;
    Pay=Pay*Sayi;
    printf("Toplam:%f",Toplam);

    while(Sayac<=Dongu){

        Pay=Pay*Sayi;
        Faktoriyel=Faktoriyel*SayacFaktoriyel;
        Islem=Pay/Faktoriyel;
        Toplam=Toplam+Islem;

        printf("Pay:%d\n",Pay);
        printf("Faktoriyel:%d\n",Faktoriyel);
        printf("Toplam:%f\n",Toplam);

        Sayac++;
        SayacFaktoriyel++;
    }
    printf("Toplam:%f\n",Toplam);
    Ortalama=Toplam/Dongu;
    printf("Ortalama:%lf",Ortalama);


    return 0;
}