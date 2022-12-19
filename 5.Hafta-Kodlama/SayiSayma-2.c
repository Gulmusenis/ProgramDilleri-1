#include<stdio.h>
int main(){
    //500'den N'e kadar olan sayilari yazdirma
    int N,Sayac=500;
    printf("Bir Sayi Giriniz(500'den Kucuk):");
    scanf("%d",&N);

    while(Sayac>N){
        printf("%d.Sayi:%d\n",Sayac,Sayac);
        Sayac--;
    }




    return 0;
}