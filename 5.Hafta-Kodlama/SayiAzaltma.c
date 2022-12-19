#include<stdio.h>
int main(){
    //Buyuk sayiyi kucuk sayi kadar azaltma
    int Sayi1,Sayi2,Swap,Sayac=0;

    printf("Birinci Sayiyi Giriniz:");
    scanf("%d",&Sayi1);
    printf("Ikinci Sayiyi Giriniz:");
    scanf("%d",&Sayi2);

    if(Sayi1<Sayi2){
        Swap=Sayi1;
        Sayi1=Sayi2;
        Sayi2=Swap;
    }
    printf("Buyuk Sayi:%d\n",Sayi1);

    while(Sayi1>=Sayi2){
        Sayi1=Sayi1-Sayi2;
        Sayac++;
    }
    printf("Yeni Buyuk Sayi:%d\n",Sayi1);
    printf("Kucuk Sayi:%d\n",Sayi2);
    printf("Dongu:%d",Sayac);




    return 0;
}