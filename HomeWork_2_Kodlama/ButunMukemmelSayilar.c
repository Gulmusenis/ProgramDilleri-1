#include<stdio.h>

int main(){

    //Girilen sayinin mükemmel sayi olup olmadigini bulma

    //kendisi hariç tam bölenlerinin toplamına eşitse
    int N,Toplam=0,Sayac=1;

    printf("Bir Sayi Giriniz:");
    scanf("%d",&N);

    while(Sayac<N){

        if(Sayac%Bolme==0){
            Toplam=Toplam+Sayac;
        }
        Bolme++;
        Sayac++;
    }

        

    return 0;
}