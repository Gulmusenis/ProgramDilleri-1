#include<stdio.h>
int main() {

	int feet, cm;
	printf("Donusturelecek Feet Degerini Giriniz:");
	scanf_s("%d", &feet);

	cm = feet / 0.032808;

	printf("Donusturme Sonucu:%d", cm);



	return 0;
}