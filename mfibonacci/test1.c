#include <stdio.h>
#include "test1.h"
int main(){

	int n;
	printf("Tobi Santoso (14115029)\n");
	printf("Jefri Pranata \n");
	printf("Benyamin Tupang\n");
	printf("masukkan nilai fibonacci: ");
	scanf("%d",&n);
	printf("hasil fibonacci : %d\n",fibonacci(n));
	getchar();
	return 0;
}
