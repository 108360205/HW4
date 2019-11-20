#include<stdio.h>
#define SIZE 10

int main(void) {
	int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	int pass;
	size_t i;
	int hold;
	puts("Data items in oringinals order");

	for (i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
	}
	for (pass = 0; pass < 10; ++pass) {
		for (i = 0; i < pass; ++i) {
			if (a[i] > a[pass]) {
				hold = a[i];
				a[i] = a[pass];
				a[pass] = hold;
			}
			if (a[0] < a[1] && a[2] < a[3] && a[4] < a[5] && a[6] < a[7] && a[8] < a[9])break;

		}

	}
	puts("\nData items in ascending order");

	for (i = 0; i < SIZE; i++) {
		printf("%4d", a[i]);
	}
	puts("");
	system("pause");
}

