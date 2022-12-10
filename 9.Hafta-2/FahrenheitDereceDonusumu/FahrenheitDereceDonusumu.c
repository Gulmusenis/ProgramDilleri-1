#include<stdio.h>
int main() {

	int derece, fahrenheit;
	printf("Lutfen Donusturulmesi Istenen Fahrenheit Degerini Giriniz:");
	scanf_s("%d", &fahrenheit);

	derece = (fahrenheit - 32) * 5 / 9;

	printf("Bulunan Derece Degeri:%d", derece);



	return 0;
}