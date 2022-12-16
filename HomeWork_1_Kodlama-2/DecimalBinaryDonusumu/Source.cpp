#include<stdio.h>
#include <stdlib.h>

int main() {
	int N;
	float toplam = 0.5;
	float bolum = 0.5;
	printf("Lutfen Bir Sayi Giriniz: ");
	scanf("%d", &N);

	printf("%f\n", bolum);

	for (N = 10; N >= (N / 2); N = N - 2)
		toplam += bolum * (1 / 2);

	printf("Islemin Sonucu:%f\n", toplam);


	return 0;
}