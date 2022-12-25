#include<stdio.h>
int main(){

    float Ortalama=0.0,Toplam=1.0;
    int   Sayi,Sayac=1,SayacFaktoriyel=1,Faktoriyel=1,Pay=1,Dongu,IslemSayisi=0,Islem=0;

    printf("Dongunun Kac Kere Tekrarlancagini Giriniz:");
    scanf("%d",&Dongu);
    printf("Bir Sayi Giriniz:");
    scanf("%d",&Sayi);

    while(Sayac<=Dongu){

        Pay=Pay*Sayi;
        Faktoriyel=Faktoriyel*SayacFaktoriyel;
        printf("Pay:%d\n",Pay);
        printf("Faktoriyel:%d\n",Faktoriyel);

        if(Sayac%2==0){
            Islem=(Pay/Faktoriyel);
            Toplam=Toplam+Islem;
            IslemSayisi++;
        }
        printf("Toplam:%f\n",Toplam);

        Sayac++;
        SayacFaktoriyel++;
    }
    printf("Toplam:%f\n",Toplam);
    printf("Islem Sayisi:%d",IslemSayisi);
    Ortalama=Ortalama/IslemSayisi;
    printf("Ortalama:%.2f",Ortalama);


    return 0;
}