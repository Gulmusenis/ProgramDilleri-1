#include<stdio.h>
int main(){

    //Girilen Sayinin Polindrom Sayi Olup Olmadiginin Kontrol Edilmesi
    //2222
    int Basamak,Sayi,SayininTersi=0,Kontrol=0;
    printf("Bir Sayi Giriniz:");
    scanf("%d",&Sayi);

    Kontrol=Kontrol+Sayi;

    while(Sayi>0){
        Basamak=Sayi%10;
        SayininTersi=(SayininTersi*10)+Basamak;      
        Sayi=Sayi/10;
    }
    
    printf("Sayinin Tersi:%d\n",SayininTersi);
    printf("Kontrol Sayi:%d\n",Kontrol);

    if(SayininTersi == Kontrol){
        printf("Girdiginiz Sayi Polindrom Sayidir.");
    }
    else{
        printf("Girdiginiz Sayi Polindrom Sayi Degildir.");

    }
   


    return 0;
}