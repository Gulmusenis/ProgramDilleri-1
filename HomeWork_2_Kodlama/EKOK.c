#include<stdio.h>


int main(){

    //İki Sayinin EKOK'unun Bulunması

    int Sayi1,Sayi2,Sonuc1=0,Sonuc2=0,Sayac=0,EKOK=0;
    printf("Birinci Sayiyi Giriniz:");
    scanf("%d",&Sayi1);
    
    printf("Ikinci Sayiyi Giriniz:");
    scanf("%d",&Sayi2);


    while(Sayac<=10){

        if(Sonuc1=Sonuc2){
            EKOK=EKOK+Sonuc1;
            break;
        }

        Sonuc1=Sonuc1+Sayi1;
        Sonuc2=Sonuc2+Sayi2;
        
        Sayac++;
    }
    printf("%d\n",Sonuc1);
    printf("%d\n",Sonuc2);
    printf("%d\n",EKOK);

    return 0;
}