#include<stdio.h>

int main(){

    //1'den N'e kadar olan güçlü sayilari bulma

    int N,Faktoriyel=1,Toplam=0,Yedek=0,Sayac=0;
    printf("Bir Sayi Giriniz:");
    scanf("%d",&N);

    
    for(;Sayac<=N;Sayac++){
        Yedek=Yedek+Sayac;
        for(;Yedek>0;Yedek=Yedek/10){
            N=Yedek%10;
                for(;N>0;N--){
                    Faktoriyel=Faktoriyel*N;
                }
            Toplam = Toplam+Faktoriyel;
            if(Sayac==Toplam){
                printf("Guclu Olan Sayi:%d\n",Sayac);
            }
            else{
                printf("Guclu Olmayan Sayi:%d\n",Sayac);
            }
            Faktoriyel=1;
            Yedek=0;
            Toplam=0;
        }
    }
    printf("Sayac:%d\n",Sayac);
    printf("Toplam:%d\n",Toplam);
    printf("Faktoriyel:%d\n",Faktoriyel);
    

    return 0;
}