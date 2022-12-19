#include<stdio.h>
int main(){
    //Girilen 10 sayifan 2'ye 5'e ve 10'a bölünen sayilarin sayisini bulma
    int IkiyeBolunen=0,BeseBolunen=0,OnaBolunen=0,N;
    printf("Donguyu Durdurmak Istediginiz Zaman -1 Degerini Giriniz\n");
    

    while(N != -1){
        printf("Bir Sayi Giriniz:\n");
        scanf("%d",&N);
        if(N%10==0){
            OnaBolunen++;
        }
        else if(N%5==0){
            BeseBolunen++;
        }
        else if(N%2==0){
            IkiyeBolunen++;
        }
        else{
            printf("Girilen Sayi 2 ye 5 e ya da 10 a Bolunmuyor\n");
        }
    }
    printf("Ikiye Bolunen Sayilarin Sayisi:%d\n",IkiyeBolunen);
    printf("Bese Bolunen Sayilarin Sayisi:%d\n",BeseBolunen);
    printf("Ona Bolunen Sayilarin Sayisi:%d\n",OnaBolunen);




    return 0;
}