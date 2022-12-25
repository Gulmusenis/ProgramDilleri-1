#include<stdio.h>

int main(){

    //1 den N'e kadar olan asal sayıların ortalamasini yazdirma

    int Toplam=0,Toplam2=0;
    int N,Sayac=1,Sayac2=1,Dongu=0,Dongu2=0;
    printf("Bir Sayi Giriniz:");
    scanf("%d",&N);

    while(Sayac<=7){
        
        if(Sayac%2 != 0){
            printf("Asal Sayi:%d\n",Sayac);
            Toplam = Toplam+Sayac;
            Dongu++;
        }
        else if(Sayac==2){
            printf("Asal Sayi:%d\n",Sayac);
            Toplam = Toplam+Sayac;
            Dongu++;
        }
        Sayac++;
    }

    while(Sayac2<=N){
        if(Sayac2 != 1 && Sayac2%2 != 0 && Sayac2%3 != 0 && Sayac2%5 != 0 && Sayac2%7 != 0){
            printf("Asal Sayi:%d\n",Sayac2);
            Toplam2 = Toplam2+Sayac2;
            Dongu2++;
        }
        Sayac2++;
    }
    printf("Toplam:%d\n",Toplam);
    printf("Toplam:%d\n",Toplam2);
    printf("Dongu:%d\n",Dongu);
    printf("Dongu2:%d\n",Dongu2);
    printf("1'den N'e Kadar Olan Asal Sayilarin Ortalamasi:%d",(Toplam+Toplam2)/(Dongu+Dongu2));
}
