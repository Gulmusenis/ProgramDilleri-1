#include<stdio.h>
int main(){
    //Kontrollu sayi toplami

    int Sayi1,Sayi2;

    printf("Birinci Sayiyi Giriniz");
    scanf("%d",&Sayi1);
    printf("Ikinci Sayiyi Giriniz");
    scanf("%d",&Sayi2);
    
    if(Sayi1>=50){
        if(Sayi2>=50){
            printf("Girilen Sayilarin Toplami:%d",(Sayi1+Sayi2));
        }
        printf("Girilen Sayilardan Biri 50'den Kucuk");
    }
    else{
        printf("Girilen Sayilar 50'den Kucuk");
    }

    return 0;
}