#include<stdio.h>

int main() {

	int sayi1 = 1000;
	int sayi2 = 2000;
	
	while (sayi1<sayi2) {
		if (sayi1%2 != 0) {
			printf("%d Bir Tek Sayidir\n", sayi1);
		}
		sayi1++;
	}




	return 0;
}