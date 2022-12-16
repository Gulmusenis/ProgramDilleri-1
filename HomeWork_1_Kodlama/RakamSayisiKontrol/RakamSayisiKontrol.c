#include<stdio.h>

int main(){

    int N,Rakam,SonBasamak=0,RakamCounter=0,Sayi=0;
    printf("Bir Sayi Giriniz:");
    scanf("%d",&N);
    printf("Sayilmasini Istediginiz Rakami Giriniz:");
    scanf("%d",&Rakam);
        Sayi=Sayi+N;
        while(N>0){
            SonBasamak=N%10;
            if(SonBasamak==Rakam){
                RakamCounter++;
            }
            N=N/10;
        }
        printf("Girilen Sayi:%d\n",Sayi);
        printf("Istenen Rakamin Sayisi:%d\n",RakamCounter);
    return 0;
}