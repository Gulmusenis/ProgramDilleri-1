#include<stdio.h>
int main() {

	int sayi1, sayi2, toplam;


	printf("Lutfen Birinci Sayiyi Giriniz:");
	scanf_s("%d",&sayi1);
	printf("Lutfen Ikinci Sayiyi Giriniz:");
	scanf_s("%d",&sayi2);

	toplam = sayi1 + sayi2;

	printf("Girdiginiz Sayilarin Toplami:%d", toplam);





	return 0;
}