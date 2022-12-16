#include<stdio.h>
int main(){

int N,basamakSayisi=0;
printf("Bir Sayi Giriniz:");
scanf("%d",&N);
//6923
while(N>0){
    N=N/10;
    basamakSayisi++;
}
printf("Girilen Sayinin Basamak Sayisi:%d",basamakSayisi);



    return 0;
}