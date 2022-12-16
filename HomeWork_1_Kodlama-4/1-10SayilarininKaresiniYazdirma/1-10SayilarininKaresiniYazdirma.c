#include<stdio.h>
int main() {

	int sayac=1,sonuc;
	while (sayac <= 10) {

		sonuc = sayac * sayac;
		printf("%d. Sayinin Kare Sonucu=%d\n",sayac,sonuc);
		sayac++;
	}



	return 0;
}