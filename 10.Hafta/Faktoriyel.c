#include<stdio.h>

int main(){

    int N,Sayac=1,Faktoriyel=1;
    printf("Faktoriyeli Alincak Sayi:");
    scanf("%d",&N);

    while(Sayac<=N){
        Faktoriyel=Faktoriyel*Sayac;
        Sayac++;
    }
    printf("Girilen Sayinin Faktoriyeli:%d",Faktoriyel);




    return 0;
}