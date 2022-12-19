#include<stdio.h>
int main(){

    //Yaş bulma
    int GuncelYil,DogumYili;
    printf("Lutfen Guncel Yili Giriniz:");
    scanf("%d",&GuncelYil);
    printf("Dogum Yilinizi Giriniz:");
    scanf("%d",&DogumYili);
    
    printf("Yasiniz:%d",(GuncelYil-DogumYili));


    return 0;
}