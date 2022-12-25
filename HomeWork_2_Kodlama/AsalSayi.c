#include<stdio.h>

int main(){

    //1 den N'e kadar olan asal sayıları yazdirma

    int N,Sayac=1;
    printf("Bir Sayi Giriniz:");
    scanf("%d",&N);

    while(Sayac<=7){
        
        if(Sayac%2 != 0){
            printf("Asal Sayi:%d\n",Sayac);
        }
        else if(Sayac==2){
            printf("Asal Sayi:%d\n",Sayac);
        }
        Sayac++;
    }

    while(Sayac<=N){
        if(Sayac%2 != 0 && Sayac%3 != 0 && Sayac%5 != 0 && Sayac%7 != 0){
            printf("Asal Sayi:%d\n",Sayac);
        }
        Sayac++;
    }
     




    return 0;
}