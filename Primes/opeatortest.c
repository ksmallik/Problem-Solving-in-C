#include <stdio.h>
#include <math.h>

int main() {
    int n, p = 1;
    scanf("%d", &n);     // n == 6

    while(n > 1) {
        p   *= n--;
    }
    printf("%d\n", p);
}
