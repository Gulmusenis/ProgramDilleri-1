#include<stdio.h>
int main(){
    //10'dan 99'a kadar olan sayilarindan her iki basamagida asal olanlari bulma

    int Sayac=10,Yedek,BirlerBasamagi,OnlarBasamagi;

    while(Sayac<=99){
        Yedek=Sayac;
        BirlerBasamagi=Yedek%10;
        OnlarBasamagi=Yedek/10;
        
        if(BirlerBasamagi==0 || OnlarBasamagi==0){
            printf("(%d):Sayinin Bir Ya Da Iki Basamaginda Asallik Yoktur.\n",Sayac);
        }
        else if(BirlerBasamagi==2 || BirlerBasamagi==3 || BirlerBasamagi==5 || BirlerBasamagi==7){
            if(OnlarBasamagi==2||OnlarBasamagi==3||OnlarBasamagi==5||OnlarBasamagi==7){
                printf("(%d)Her Iki Basamaktada Asallik Vardir.\n",Sayac);
            }
        }
        else{
            printf("(%d):Sayinin Bir Ya Da Iki Basamaginda Asallik Yoktur.\n",Sayac);
        }
        Sayac++;
    }


    return 0;
}