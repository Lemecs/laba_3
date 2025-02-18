//rab_1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	printf("enter the length of the array (>2)\n");
	scanf("%d", &x);
	double* mas = (double*)malloc(x * sizeof(double));
	if (!mas) {
		printf("null data type\n");
		return 1;
	}
	printf("enter %d of real numbers\n", x);
	for (int i = 0; i < x; i++) {
		scanf("%lf", &mas[i]);
	}
	double max = mas[0] + mas[x - 1];
	for (int i = 1; i < x / 2; i++) {
		double ob = mas[i] + mas[x - 1 - i];
		if (max < ob) {
			max = ob;
		}
	}
	printf("maximum: %.2lf", max);
	free(mas);
	return 0;
}
