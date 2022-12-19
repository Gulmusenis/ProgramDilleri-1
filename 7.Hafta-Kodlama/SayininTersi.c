#include<stdio.h>
int main(){

    //Girilen sayinin tersten yazilimi
    int N,Yedek=0,SayininTersi=0;
    printf("Tersi Yazilcak Sayiyi Giriniz:");
    scanf("%d",&N);
    printf("Girilen Sayi:%d\n",N);

    while(N>0){
        Yedek=N%10;
        SayininTersi=(SayininTersi*10)+Yedek;
        N=N/10;
    }
    printf("Girilen Sayinin Tersi:%d",SayininTersi);





    return 0;
}