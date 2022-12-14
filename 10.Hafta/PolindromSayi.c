#include<stdio.h>

int main(){


    int N,SonBasamak=0,IlkBasamak=0;
    printf("Bir Sayi Giriniz:");
    scanf("%d",&N);

    IlkBasamak=N%10;
    SonBasamak = SonBasamak+N;


    while(SonBasamak>=10){
        SonBasamak=SonBasamak/10;
        if(IlkBasamak != SonBasamak){
            printf("Girilen Sayi Polindrom Sayi Degil");
            break;
        }
    }


    return 0;
}