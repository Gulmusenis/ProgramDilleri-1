#include<stdio.h>
int main(){
    //Bir arabanin hizini bulmak
    int T,V=0;
    printf("Bir Zaman Giriniz (15-50 Arasinda):");
    scanf("%d",&T);

    if(T<=15){
        V=T*32;
        printf("Arabanin Hizi:%d",V);
    }
    else if(T>15 && T<=35){
        V=480;
        printf("Arabanin Hizi:%d",V);
    }
    else if(T>35 && T<=50){
        V=480-((T-35)*32);
        printf("Arabanin Hizi:%d",V);
    }
    else{
        printf("Gecersiz Giris Yaptiniz...");
    }



    return 0;
}