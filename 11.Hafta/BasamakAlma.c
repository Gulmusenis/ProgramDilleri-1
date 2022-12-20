#include<stdio.h>
int main(){

    int Basamak[5],N,Sayac=0,BasamakDegeri,i=0;
    printf("Bir Sayi Giriniz(Maksimum 5 Basamakli):");
    scanf("%d",&N);
    //54967
    for(;N>0;N=N/10){
        BasamakDegeri=N%10;
        Basamak[Sayac]=BasamakDegeri;
        Sayac++;
        printf("Girilen Sayinin Basamak Degerleri:%d\n",Basamak[i]);
        i++;
    }
    



    return 0;
}