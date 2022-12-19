#include<stdio.h>
int main(){
    //Üretilen parca sayisina göre maaş hesaplama
    int UretilenParcaParasi=0,ParcaSayisi,TamMaas=0,NormalMaas;
    printf("Lutfen Aldiginiz Maasi Giriniz:");
    scanf("%d",&NormalMaas);
    printf("Lutfen Urettiginiz Parca Sayisini Giriniz:");
    scanf("%d",&ParcaSayisi);

    if(ParcaSayisi>=0 && ParcaSayisi<10){
        UretilenParcaParasi=ParcaSayisi*5000;
        TamMaas=NormalMaas+UretilenParcaParasi;
    }
    else if(ParcaSayisi>=10 && ParcaSayisi<30){
        UretilenParcaParasi=ParcaSayisi*8000;
        TamMaas=NormalMaas+UretilenParcaParasi;
    }
    else{
        UretilenParcaParasi=ParcaSayisi*12000;
        TamMaas=NormalMaas+UretilenParcaParasi;
    }
    printf("Aldiginiz Toplam Maas:%d",TamMaas);



    return 0;
}