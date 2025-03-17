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
	return 0;
}

//rab_2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main() {
//	int x, n;
//	printf("enter the length of the array (>2) and the number you want to find\n");
//	scanf("%d%d", &x, &n);
//	int* mas = (int*)malloc(x * sizeof(int));
//if (!mas) {
//	printf("error\n");
//	return 1;
//	}
//	printf("enter %d integers\n", x);
//	for (int i = 0; i < x; i++) {
//		scanf("%d", &mas[i]);
//	}
//	for (int i = 0; i < x; i++) {
//		if (mas[i] == n) {
//			printf("%d\n", i);
//		}
//		else if (i == n){
//			printf("-1\n");
//		}
//	}
//	return 0;
//}

//rab_3
#define _CRT_SECURE_NO_WARNINGS
#define max_size 100
#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>

int main() {
	int n;
	int mat[max_size][max_size];
	printf("enter matrix size\n");
	scanf("%d", &n);
	if (n <= 0 and n > max_size) {
		printf("error");
		return 1;
	}
	printf("enter the matrix elements line by line \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &mat[i][j]);
		}
	}
	int sum = 0, max_sum = 0, line_num = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sum += mat[i][j];
			if (max_sum < sum) {
				max_sum = sum;
				line_num = i + 1;
			}
		}
		sum = 0;
	}
	printf("maximum sum - %d\nline number - %d", max_sum, line_num);

	return 0;
}

//rab_4
//#define _CRT_SECURE_NO_WARNINGS
//#define max_size 100
//#include <stdio.h>
//#include <stdlib.h>
//#include <iso646.h>
//
//int main() {
//	int n;
//	int mat[max_size][max_size];
//	printf("enter matrix size\n");
//	scanf("%d", &n);
//	if (n <= 0 and n > max_size) {
//		printf("error");
//		return 1;
//	}
//	printf("enter the matrix elements line by line \n");
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &mat[i][j]);
//		}
//	}
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (mat[i][j]%2==0 and (i + 1 + j + 1 > 1 + i * 2) and i != j) {
//				sum += mat[i][j];
//			}
//		}
//	}
//	printf("sum - %d", sum);
//	return 0;
//}

//rab_5
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int n, m;
//	printf("enter the length of the array (>2)\n");
//	scanf("%d", &m);
//	int* arr = (int*)malloc(m * sizeof(int));
//	int* arr2 = (int*)malloc(m * sizeof(int));
//	if (!arr) {
//		printf("error\n");
//		return 1;
//	}
//	for (int i = 0; i < m; i++) {
//		scanf("%d", &arr[i]);
//	}
//	printf("how many positions is the shift?\n");
//	scanf("%d", &n);
//	for (int i = 0; i < m; i++) {
//		if (i + n < m) {
//			arr2[i + n] = arr[i];
//		}
//		else
//			arr2[i + n - m] = arr[i];
//	}
//	for (int i = 0; i < m; i++) {
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}