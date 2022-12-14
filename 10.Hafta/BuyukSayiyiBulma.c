#include<stdio.h>


int main(){

    int Buyuk,Kucuk,Ortanca,Degisim=0;

    printf("Birinci Sayiyi Giriniz:");
    scanf("%d",&Buyuk);
    printf("Ikinci Sayiyi Giriniz:");
    scanf("%d",&Kucuk);
    printf("Ucuncu Sayiyi Giriniz:");
    scanf("%d",&Ortanca);

    if(Buyuk<Ortanca){
        Degisim=Buyuk;
        Buyuk=Ortanca;
        Ortanca=Degisim;
    }
    else if(Buyuk<Kucuk){
        Degisim=Buyuk;
        Buyuk=Kucuk;
        Kucuk=Degisim;
    }
    else if(Ortanca<Kucuk){
        Degisim=Ortanca;
        Ortanca=Kucuk;
        Kucuk=Degisim;
    }
    else{
        printf("Yanlis Giris...");
    }
    printf("Buyuk Sayi:%d",Buyuk);
    printf("Ortanca Sayi:%d",Ortanca);
    printf("Kucuk Sayi:%d",Kucuk);





    return 0;
}