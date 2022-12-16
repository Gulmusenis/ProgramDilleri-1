#include<stdio.h>
int main() {


	int	N;
	printf("Lutfen Eksi(-) Olmayan Bir Sayi Giriniz:");
	scanf_s("%d", &N);

	while (N > 0) {
		printf("%d\n", N);
		N--;
	}





	return 0;
}