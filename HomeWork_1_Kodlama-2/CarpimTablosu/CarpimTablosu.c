#include<stdio.h>
int main(){

int N,sayac;
printf("Bir Sayi Giriniz:");
scanf("%d",&N);

for(sayac=0;sayac<=10;sayac++)
    printf("%d x %d=%d\n",N,sayac,(N*sayac));


    return 0;
}