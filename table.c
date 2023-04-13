#include <stdio.h>
#include<float.h>
int main(void) {
	int i;
	int a;
	float f;
	printf("%4s %7s %8s \n", "Zahl", "Quadrat", "Kehrwert");
	for (i = 1; i < 13; i++) {
	a = i * i;
	f = (float)1 / i;
	printf("%4d %7d %8f \n" , i , a , f );	
	}
	return 0;
}