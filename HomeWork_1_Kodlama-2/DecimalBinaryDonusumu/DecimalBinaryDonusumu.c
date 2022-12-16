#include<stdio.h>
int main() {

	int N;
	printf("Bir Sayi Girssssiniz:");
	scanf_s("%d", &N);
	while (N > 0) {
		printf("%d",N%2);
		N = N / 2;
	}




	return 0;
}