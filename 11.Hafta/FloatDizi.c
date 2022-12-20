#include<stdio.h>
int main(){

    float Toplam=0;
    int Sayac;
    float Dizi[8]={2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0};
    
    for(Sayac=0;Sayac<8;Sayac++){
        Toplam=Toplam+Dizi[Sayac];
    }
    printf("Toplam:%f\n",Toplam);
    printf("Sayac:%d\n",Sayac);
    printf("Dizinin Ortalamasi:%f",Toplam/Sayac);




    return 0;
}