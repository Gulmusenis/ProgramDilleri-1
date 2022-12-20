#include<stdio.h>
int main(){

int Dizi[10],Kontrol,Sayac=0,i=0;

for(;Kontrol != -1;){ 
    printf("Dizi[%d] Degerini Giriniz:",Sayac);
    scanf("%d",&Dizi[Sayac]);
    
    printf("Dizi[%d] Degerinin Karesi:%d\n",Sayac,(Dizi[i]*Dizi[i]));

    printf("Devam Etmek Istiyor musun?(Evet=0,Hayir=-1):");
    scanf("%d",&Kontrol);

    if(Sayac==9){
        break;
    }
    Sayac++;
    i++;
}   

    return 0;
}