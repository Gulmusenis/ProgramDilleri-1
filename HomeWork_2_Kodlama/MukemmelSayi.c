#include<stdio.h>

int main(){

    //Girilen sayinin mükemmel sayi olup olmadigini bulma

    //kendisi hariç tam bölenlerinin toplamına eşitse
    int N,Toplam=0,Sayac=1;

    printf("Bir Sayi Giriniz:");
    scanf("%d",&N);

    while(Sayac<N){
        if(N%Sayac==0){
            Toplam = Toplam+Sayac;
        }
        Sayac++;
    }
    if(Toplam==N){
        printf("Girilen Sayi Mukemmel Sayi.");
    }
       

    else{
        printf("Girilen Sayi Mukemmel Sayi Degil.");
    }
        

    return 0;
}