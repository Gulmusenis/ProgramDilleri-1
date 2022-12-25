#include<stdio.h>

int main(){

    //İlk 50 Doğal Sayinin Ortalamasinin Hesaplanmasi
    int Sayac=0,Toplam=0,Ortalama=0;
    while(Sayac<=50){
        Toplam=Toplam+Sayac;
        Sayac++;
    }
    printf("Ilk 50 Dogal Sayinin Toplami:%d\n",Toplam);
    printf("Ilk 50 Dogal Sayinin Ortalamasi:%d",(Toplam/(Sayac-1)));




    return 0;
}