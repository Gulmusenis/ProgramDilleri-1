#include<stdio.h>
int main() {

	int N;
	printf("Lutfen Bir Sayi Giriniz:");
	scanf_s("%d", &N);

	if (N % 2 == 0) {
		printf("%d Cift Sayidir.", N);
	}
	else {
		printf("%d Tek Sayidir.", N);
	}



	return 0;
}