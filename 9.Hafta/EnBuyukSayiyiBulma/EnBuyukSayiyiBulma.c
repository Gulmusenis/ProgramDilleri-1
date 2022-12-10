#include<stdio.h>
int main() {

	int a, b, c,d;
	printf("Birinci Sayiyi Giriniz:");
	scanf_s("%d", &a);
	printf("Birinci Sayiyi Giriniz:");
	scanf_s("%d", &b);
	printf("Birinci Sayiyi Giriniz:");
	scanf_s("%d", &c);
	// a=6 b=7 c=3
	// a=7 b=6 c=3

	if (a < b) {
		d = a;
		a = b;
		b = d;
	}
	else if (a < c) {
		d = a;
		a = c;
		c = d;
	}
	else if (b < c) {
		d = b;
		b = c;
		c = d;
	}

	printf("En Buyuk Sayi:%d\n", a);
	printf("Ortanca Sayi:%d\n", b);
	printf("En Kucuk Sayi:%d\n", c);


	return 0;
}