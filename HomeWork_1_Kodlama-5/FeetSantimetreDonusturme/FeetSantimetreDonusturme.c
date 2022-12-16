#include<stdio.h>
int main() {

	int f, cm;
	printf("Lutfen Donusturulecek Feet Degerini Giriniz:");
	scanf_s("%d", &f);
	
	cm = f / 0.032;

	printf("Donusturmenin Sonucu:%d", cm);




	return 0;
}