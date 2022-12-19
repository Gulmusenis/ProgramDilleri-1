#include<stdio.h>
int main(){
    //Art arda girilen sayilari buyuk kucuk olarak ayirma
    int EnBuyuk,EnKucuk,Sayac=0,Sayi,Swap;
    printf("Ilk En Buyuk Sayiyi Giriniz:");
    scanf("%d",&EnBuyuk);
    printf("Ilk En Kucuk Sayiyi Giriniz:");
    scanf("%d",&EnKucuk);

    if(EnBuyuk<EnKucuk){
        Swap=EnBuyuk;
        EnBuyuk=EnKucuk;
        EnKucuk=Swap;
    }


    while(Sayac<10){
        printf("Bir Sayi Giriniz:");
        scanf("%d",&Sayi);

        if(Sayi>EnBuyuk){
            EnBuyuk=Sayi;
        }
        else if(Sayi<EnKucuk){
            EnKucuk=Sayi;
        }
        Sayac++;
    }
    printf("En Buyuk Sayi:%d\n",EnBuyuk);
    printf("En Kucuk Sayi:%d",EnKucuk);



    return 0;
}