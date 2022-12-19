#include<stdio.h>
int main(){
    //Kullanicidan alinan 10 tane sayinin pozitif ve negatif olanlarini sayma
    int Sayi,Sayac=0,NegatifSayac=0,PozitifSayac=0;
    while(Sayac<10){
        printf("Bir Sayi Giriniz:");
        scanf("%d",&Sayi);
        if(Sayi<0){
            NegatifSayac++;
        }
        else{
            PozitifSayac++;
        }
        Sayac++;
    }
    printf("Negatif Sayisi:%d\n",NegatifSayac);
    printf("Pozitif Sayisi:%d",PozitifSayac);






    return 0;
}