#include<stdio.h>

int main(){

    int KisaKenar,UzunKenar,Alan,Cevre;


    printf("Dikdortgenin Kisa Kenarini Giriniz:");
    scanf("%d",&KisaKenar);
    printf("Dikdortgenin Uzun Kenarini Giriniz:");
    scanf("%d",&UzunKenar);
    
    Alan=KisaKenar*UzunKenar;
    Cevre=2*(KisaKenar+UzunKenar);

    printf("Dikdortgenin Alani:%d\n",Alan);
    printf("Dikdortgenin Cevresi:%d",Cevre);
    
    return 0;
}