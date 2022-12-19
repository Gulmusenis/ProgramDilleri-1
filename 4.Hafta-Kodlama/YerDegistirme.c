#include<stdio.h>
int main(){
    //Girilen iki sayiyi yer degistirme

    int Sayi1,Sayi2,Swap=0;
    printf("Birinci Sayiyi Giriniz:");
    scanf("%d",&Sayi1);
    printf("Ikinci Sayiyi Giriniz:");
    scanf("%d",&Sayi2);

    printf("Birinci Sayi:%d\n",Sayi1);
    printf("Ikinci Sayi:%d\n",Sayi2);

    Swap=Sayi1;
    Sayi1=Sayi2;
    Sayi2=Swap;

    printf("Yer Degistirme Sonucu Birinci Sayi:%d\n",Sayi1);
    printf("Yer Degistirme Sonucu Ikinci Sayi:%d",Sayi2);

    return 0;
}