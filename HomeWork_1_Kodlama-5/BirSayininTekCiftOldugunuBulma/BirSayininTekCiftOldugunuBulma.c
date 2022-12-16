#include<stdio.h>
int main() {

	int N;
	printf("Lutfen Bir Sayi Giriniz:");
	scanf_s("%d",&N);

	if (N % 2 == 0) {
		printf("Girdiginiz Sayi Cift");
	}
	else {
		printf("Girdiginiz Sayi Tek");
	}



	return 0;
}