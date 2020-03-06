#include <stdio.h>

void disp(int(*pa)[3], int size)
{
	int i, k;

	for (i = 0; i < size; ++i) {
		for (k = 0; k < 3; ++k)
			printf("%d ", pa[i][k]);
		printf("\n");
	}
}

int main(void)
{
	int a[4][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }, { 10, 11, 12 } };
	
	disp(a, 4);

	return 0;
}
