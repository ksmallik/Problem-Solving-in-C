#include <stdio.h>
#include <math.h>

#define true 1
#define false 2

long fact(int x) {
	int n = 0;
	long f= 1;
	while(n <  x) {
		f *= (++n);
	}
	return f;
}

float nthTerm(int x, int i) {
	return pow(x, i) / (float)fact(i);
}

float calculate_sine(int x, float ep) {
	/* uses taylor's expansion for calculating sine */
	int i = 1, nextTerm = 1;
	float sine = x, prev_sine = 0.0;
	float diff = x;
	while(true) {
		i += 2;
		prev_sine = sine;
		if((nextTerm % 2) == 0) {
			sine = sine - nthTerm(x, i);
		} else {
			sine = sine + nthTerm(x, i);
		}
		diff = sine - prev_sine;
		if(diff < 0)
			diff = -diff;
		if(diff < ep)
			break;
		nextTerm++;
	}

	return sine;
}

int main()
{
	int x = 0; float ep = 0.0;

	printf("Enter the value of x for which sine has to be calculated along with the precision: ");
	scanf("%d %f", &x, &ep);
	float sine = calculate_sine(x, ep);
	printf("\n%f\n", sine);
	printf("lib sine is %f", sin(x));

	return 0;
}
