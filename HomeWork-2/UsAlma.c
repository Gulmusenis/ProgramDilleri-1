#include<stdio.h>

int main(){

    //2 nin Katlarinin Hesaplanmasi
    int N,Us,Sonuc=1;
    printf("Kati Alincak Sayiyi Giriniz:");
    scanf("%d",&N);
    
    printf("Alincak Kat Sayisini Giriniz:");
    scanf("%d",&Us);

    while(Us>0){
        Sonuc=Sonuc*N;
        Us--;
    }
    
    printf("Girilen Sayinin Sonucu:%d",Sonuc);




    return 0;
}