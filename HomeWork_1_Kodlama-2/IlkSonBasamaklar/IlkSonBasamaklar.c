#include<stdio.h>
int main(){
int N,SonBasamak=0,BasamakSayisi=0,Yedek=0;
printf("Lutfen Bir Sayi Giriniz:");
scanf("%d",&N);

SonBasamak=N%10;
Yedek=Yedek+N;

while(Yedek>0){
    Yedek=Yedek/10;
    BasamakSayisi++;
}

while((BasamakSayisi-1)>0){
    N=N/10;
    BasamakSayisi--;
}
printf("Basamak Sayisi:%d\n",BasamakSayisi);
printf("Son Basamak:%d\n",SonBasamak);
printf("Ilk Basamak:%d",N);

    return 0;
}