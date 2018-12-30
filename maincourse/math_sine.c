#include <stdio.h>
#include <math.h>

int main() {
	float diff = 0, ep = 0, x = 0, sine = 0, term = 0, prevterm = 0, k = 1;
	int iter = 0;

	printf("Enter the vaue of x and epsilon: ");
	scanf("%f %f", &x, &ep);
	term = x;
	diff = x;
	sine = x;
	if(diff < 0) {
		diff = -diff;
	}
	while(diff > ep) {
		prevterm = term;
		term = -(term * x * x) / ((k + 1) * (k  + 2));
		sine = sine + term;
		k = k + 2;
		diff = term - prevterm;
		if(diff < 0)
			diff = -diff;
		iter++;
	}
	printf("sinx of %f = %f\n", x, sine);
	printf("NUMBER OF ITERATIONS: %d\n", iter);
	printf("library sine: %f\n", sin(x));

	return 0;
}