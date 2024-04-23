#include <stdio.h>

int main(void)
{
	int a = 5;

	if (a % 2 == 0) {
		a = 2;
	}
	else {
		a = 1;
	}

	printf("°á°ú a = %d\n", a);

	return 0;
}