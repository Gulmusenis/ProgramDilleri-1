#include<stdio.h>
int main() {

	int yaricap, alan;
	float pi = 3;

	printf("Lutfen Dairenin Alanini Giriniz:");
	scanf_s("%d", &yaricap);

	alan = pi * yaricap * yaricap;
	printf("Dairenin Alani:%d", alan);



	return 0;
}