#include<stdio.h>

int OrtalamaHesaplama(int a,int b,int c,int d,int e){
    int Ortalama=0;

    Ortalama=(a+b+c+d+e)/5;

    return Ortalama;
}



int main(){
int Ortalama=0;

Ortalama=OrtalamaHesaplama(5,6,4,7,2);

printf("Bes Sayinin Ortalamasi:%d",Ortalama);


    return 0;
}