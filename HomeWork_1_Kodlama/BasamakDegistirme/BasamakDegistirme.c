#include<stdio.h>

int main(){

    int N,IlkBasamak=0,SonBasamak=0,swap=0;
    printf("Bir Sayi Giriniz: ");
    scanf("%d",&N);

    SonBasamak=N%10;
    IlkBasamak = IlkBasamak+N;
    while(IlkBasamak>=10){

        IlkBasamak=IlkBasamak/10;
    }

    swap=IlkBasamak;
    IlkBasamak=SonBasamak;
    SonBasamak=swap;
    

    printf("%d , %d",IlkBasamak,SonBasamak);




    return 0;
}