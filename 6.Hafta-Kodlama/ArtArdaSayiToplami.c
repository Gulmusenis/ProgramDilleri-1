#include<stdio.h>
int main(){
    //Art arda girilen sayilar esit olmayana kadar toplanmasi ve ortalamasinin alinmasi

    int Kontrol=0,Sayac=0,Sayi,Toplam=0;

    do{
        printf("Lutfen Bir Sayi Giriniz:");
        scanf("%d",&Sayi);

        Toplam=Toplam+Sayi;
        Sayac++;
    }while(Kontrol != Sayi);
    
    printf("Toplam:%d\n",Toplam);
    printf("Sayac:%d\n",Sayac);
    printf("Sayilarin Ortalamasi:%d",Toplam/Sayac);

    return 0;
}