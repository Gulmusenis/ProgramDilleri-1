#include<stdio.h>

int main(){

    float BirinciKok,IkinciKok;
    int a,b,c;
    printf("Ikinci Dereceden Denklemin Koklerinin Bulunmasi\n");
    printf("---------------------------------------------\n");

    printf("X Karenin Onudeki Sayiyi Giriniz:");
    scanf("%d",&a);

    printf("X'in Onudeki Sayiyi Giriniz:");
    scanf("%d",&b);

    printf("Sabit Sayiyi Giriniz:");
    scanf("%d",&c);

    BirinciKok = -1*b+(((b*b)-(4*a*c))*(1/2))/(2*a);
    IkinciKok =  -1*b-(((b*b)-(4*a*c))*(1/2))/(2*a);

    printf("Denklemin Birinci Koku:%f\n",BirinciKok);
    printf("Denklemin Ikinci Koku:%f",IkinciKok);

    return 0;
}