#include<stdio.h>
int main() {

	int K,B,c,toplam=0;
	printf("Lutfen Birinci Sayiyi Giriniz: ");
	scanf_s("%d", &K);
	printf("Lutfen Ikinci Sayiyi Giriniz: ");
	scanf_s("%d", &B);


	if (B < K) {
		c = B;
		B = K;
		K = c;
	}
	K = K + 1;
	while (K < B) {
		toplam = toplam + K;
		K++;
	}
	printf("Toplamin Sonucu:%d", toplam);
	




	return 0;
}