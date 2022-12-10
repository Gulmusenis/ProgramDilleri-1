#include<stdio.h>
int main() {

	int derece;
	printf("Lutfen Bir Derece Giriniz:");
	scanf_s("%d", &derece);

	if (derece < 0) {
		printf("Derece Donma Noktasinin Altinda");
	}
	else {
		printf("Derece Donma Noktasinin Ustunde");
	}



	return 0;
}