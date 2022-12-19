#include<stdio.h>
int main(){
    //Kenarlari girilen şeklin kare olup olmadigini bulma

    int A,B,C,D;
    printf("Birinci Kenari Giriniz:");
    scanf("%d",&A);
    printf("Ikinci Kenari Giriniz:");
    scanf("%d",&B);
    printf("Ucuncu Kenari Giriniz:");
    scanf("%d",&C);
    printf("Dorduncu Kenari Giriniz:");
    scanf("%d",&D);
    
    if(A+C==B+D){
        if(A+D==B+C){
            if(A+B==D+C){
                printf("Kenarlari Girilen Sekil Bir Karedir");
            }
        }
    }
    else{
        printf("Girilen Sekil Kare Degildir");
    }


    return 0;
}