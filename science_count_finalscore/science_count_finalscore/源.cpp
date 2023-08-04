#include<stdio.h>
#include<math.h>

int main() {
	double a, b, c, d, e;
	scanf_s("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
	double true_a = a;
	a = 10 - fabs(5 - true_a);
	printf("%lf\n", 0.15 * a + 0.15 * b + 0.25 * c + 0.35 * d + 0.1 * e);
	printf("%lf\n", a);
	return 0;
}