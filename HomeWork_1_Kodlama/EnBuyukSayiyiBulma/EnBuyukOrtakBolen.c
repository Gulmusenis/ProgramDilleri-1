#include<stdio.h>

int main(){

    int Sayi1,Sayi2,Sayac=1,Swap,EBOB;

    printf("En Yuksek Ortak Boleni Hesaplama\n");
    printf("--------------------------------\n");
    printf("Birinci Sayiyi Giriniz:");
    scanf("%d",&Sayi1);
    printf("Ikinci Sayiyi Giriniz:");
    scanf("%d",&Sayi2);

    if(Sayi1<Sayi2){
        Swap=Sayi1;
        Sayi1=Sayi2;
        Sayi2=Swap;
    }
  
    
    while(Sayac<=Sayi1){
        if(Sayi1 % Sayac==0 && Sayi2 % Sayac==0){
            EBOB=Sayac;
            Sayac++;
        }
        else{
            Sayac++;
        }
    }
    printf("Girilen 1.Sayi=%d,Girilen 2.Sayi=%d\n",Sayi1,Sayi2);
    printf("Girilen Sayilarin En Buyuk Ortak Boleni:%d",EBOB);

    return 0;
}