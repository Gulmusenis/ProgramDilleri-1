#include<stdio.h>
int main(){
    //1'den N'e kadar olan sayilari yazdirma 
    int Sayac=1,N;
    printf("Bir Sayi Giriniz:");
    scanf("%d",&N);
    while(Sayac<N){
        printf("%d.Sayi:%d\n",Sayac,Sayac);
        Sayac++;
    }






    return 0;
}