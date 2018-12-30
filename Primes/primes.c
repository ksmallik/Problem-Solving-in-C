#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char **argv) {
	long n, sroot, factor, p = 2;
	char factor_found = FALSE;

	printf("Enter the number to check for primeness: ");
	scanf("%ld", &n);

	sroot = sqrt(n);
	while(p <= sroot && !factor_found) {
		if(n % p == 0) {
			factor = p;
			factor_found = TRUE;
		} else {
			p++;
		}
	}
	if(factor_found)
		printf("%ld is a factor of %ld\n", factor, n);
	else
		printf("%ld is prime!!\n", n);

	return 0;
}
