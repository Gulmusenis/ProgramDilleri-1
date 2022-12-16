#include<stdio.h>
int main() {

	int N, sayac=1;
	while (sayac <= 10) {
		printf("Lutfen %d.Sayinizi Giriniz:\n", sayac);
		scanf_s("%d", &N);
		printf("Girdiginiz Sayi:%d\n", N);
		sayac++;
	}




	return 0;
}