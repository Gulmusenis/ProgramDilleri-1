#include <stdio.h>

int main() {
	//Maasina zam alir-almaz sorusu
	int yas, maas;
	printf("Lutfen Yasinizi Giriniz:");
	scanf_s("%d", &yas);
	printf("Lutfen Maasinizi Giriniz:");
	scanf_s("%d", &maas);

	if (maas == 1000 && yas > 25)
		printf("Maasina Zam Alir");

	else
		printf("Maasina Zam Almaz");


	return 0;
}
