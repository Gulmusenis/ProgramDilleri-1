#include<stdio.h>
int main() {

	int BilgisayarNot, DilNot, EdebiyatNot;

	printf("Bilgisayar Notunuzu Giriniz");
	scanf_s("%d", &BilgisayarNot);
	printf("Dil Notunuzu Giriniz");
	scanf_s("%d", &DilNot);
	printf("Edebiyat Notunuzu Giriniz");
	scanf_s("%d", &EdebiyatNot);

	if ((BilgisayarNot > 65) && (EdebiyatNot > 65 || DilNot > 65)) {
		printf("Dersi Gectiniz.");
	}
	else {
		printf("Dersi Gecemediniz");
	}

	return 0;
}