#include<stdio.h>

int main(){


    //Girilen bir sayinin armstrong sayi olup olmadigini bulma

    int N,Yedek=0,Toplam=0,Sonuc=0;
    printf("Bir Sayi Giriniz:");
    scanf("%d",&N);

    Yedek=Yedek+N;
    Sonuc=Sonuc+N;

    while(Yedek>0){
        N = Yedek%10;
        Toplam = Toplam+(N*N*N);
        Yedek = Yedek/10;
    }
    printf("Toplam:%d\n",Toplam);
    if(Sonuc==Toplam){
        printf("Girdiginiz Sayi Armstrong Sayi...");
    }
    else{
        printf("Girdiginiz Sayi Armstrong Sayi Degil....");
    }
    return 0;
}