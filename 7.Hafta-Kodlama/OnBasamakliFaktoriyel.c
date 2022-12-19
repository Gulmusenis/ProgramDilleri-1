#include<stdio.h>
int main(){
    
    //Faktoriyel 10 Basamakli olana kadar yazdirma


    int BasamakToplam=0,Faktoriyel=1,Sayi,Sayac=1;
    
    for(;BasamakToplam<10;){
        Faktoriyel=Faktoriyel*Sayac;
        Sayi=Faktoriyel;
        BasamakToplam=0;
        for(;Sayi>0;Sayi=Sayi/10){
            BasamakToplam++;
        }
        printf("10 Basamakli Faktoriyelin Sonucu:%d\n",Faktoriyel);
        printf("Basamak Toplam:%d\n",BasamakToplam);
        Sayac++;
    }



    return 0;
}