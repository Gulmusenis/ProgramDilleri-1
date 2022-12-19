#include<stdio.h>
int main(){

    //Girilen sayinin basamaklarinin toplaminin ortalamasinin alimi

    int N,BirlerBasamagi,OnlarBasamagi,YuzlerBasamagi;
    printf("Bir Sayi Giriniz:");
    scanf("%d",&N);

    BirlerBasamagi=N%10;
    OnlarBasamagi=(N/10)%10;
    YuzlerBasamagi=N/100;

    
    printf("Ortalama:%d",((BirlerBasamagi+OnlarBasamagi+YuzlerBasamagi)/3));

    return 0;
}