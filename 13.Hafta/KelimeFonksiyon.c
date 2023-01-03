#include <stdio.h>
#include <string.h>

void KelimeSayisiBulma(char cumle[100]){

    if(strlen(cumle) > 100){
        printf("Cok uzun cumle girdiniz!.");
    }
    else
    {
        int sayac = 1;
        for (int i = 0; i < strlen(cumle); i++)
        {
            printf("%c", cumle[i]);
            if(cumle[i] == ' ' || cumle[i] == ',' || cumle[i] == ';' || cumle[i] == ':' || cumle[i] == '.' || cumle[i] == '?')
            {
                printf("\n");
                sayac++;
            }
        }
        printf("\nGirilen cumlede %d adet kelime vardir", sayac);
    }

}
 
main()
{
    KelimeSayisiBulma("?afasdad?asfasfasfas.qfqwdwq,qwdqwdqw:qwdqwdqwd;qwdqwdqwdqw qdwqdqwd");
    
}