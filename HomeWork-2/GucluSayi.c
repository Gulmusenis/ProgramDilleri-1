#include<stdio.h>

int main(){

    //Girilen sayinin güçlü sayi olup olmadığını bulma

    int N,Faktoriyel=1,Toplam=0,Yedek=0,Sonuc=0;
    printf("Bir Sayi Giriniz:");
    scanf("%d",&N);

    Yedek=Yedek+N;
    Sonuc=Sonuc+N;

    for(;Yedek>0;Yedek=Yedek/10){
        N=Yedek%10;
        for(;N>0;N--){
            Faktoriyel=Faktoriyel*N;
        }
        Toplam = Toplam+Faktoriyel;
        Faktoriyel=1;
    }

    if(Sonuc==Toplam){
        printf("Girilen Sayi Guclu Sayi...");
    }
    else{
        printf("Girilen Sayi Guclu Sayi Degildir...");
    }


    return 0;
}