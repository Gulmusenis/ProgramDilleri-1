#include<stdio.h>

int KareAl(int x){
    int Alan;
    Alan=x*x;

    return Alan;
}



int main(){
    int Alan,Deger;

    printf("Karenin Kenarini Gir:");
    scanf("%d",&Deger);

    Alan=KareAl(Deger);
    printf("Karenin Alani:%d",Alan);
    return 0;
}