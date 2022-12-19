#include<stdio.h>
int main(){
    //100'den N'e kadar olan sayilari 2'şer yazdirma
    int N,Sayac=100,Sayac2=1;
    printf("Bir Sayi Giriniz(100'den Buyuk):");
    scanf("%d",&N);
    while(Sayac<N){
        printf("%d.Sayi:%d\n",Sayac2,Sayac);
        Sayac=Sayac+2;
        Sayac2++;
    }





    return 0;
}