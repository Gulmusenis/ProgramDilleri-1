#include<stdio.h>
int main() {

	int K, B,c,N;
	printf("Bolmek Icin Kullanilacak Sayiyi Giriniz:");
	scanf_s("%d", &N);
	printf("Birinci Sayiyi Giriniz:");
	scanf_s("%d", &K);
	printf("Ikinci Sayiyi Giriniz:");
	scanf_s("%d", &B);

	if (B < K) {
		c = B;
		B = K;
		K = c;
	}
	K = K + 1;
	while (K < B) {
		printf("Bolme Islemi Icin Girilen Sayi:%d\n", N);
		printf("Bolunecek Sayi:%d\n", K);
		if (K % N == 0) {
			printf("Tam Bolunen Sayi:%d\n", K);
		}
		K++;
	}

	return 0;
}