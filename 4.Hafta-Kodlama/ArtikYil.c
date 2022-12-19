#include<stdio.h>
int main(){
    //Girilen yilin artik yil olup olmadigini bulma

    int GuncelYil;
    printf("Lutfen Guncel Yili Giriniz:");
    scanf("%d",&GuncelYil);

    if(GuncelYil%4==0){
        printf("Girilen Yil Artik Yildir");
    }
    else{
        printf("Girilen Yil Artik Yil Degildir");
    }
    


    return 0;
}