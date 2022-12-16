#include<stdio.h>
int main() {

	int F,C;
	printf("Lutfen Donusturulecek Fahrenheit Degerini Giriniz: ");
	scanf_s("%d", &F);

	C = (F - 32) / 1.8;

	printf("Donusumun Sonucu: %d", C);





	return 0;
}