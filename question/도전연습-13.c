#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char input[100] = "\0";
	int cnt = 0;

	printf("문장 입력: ");
	gets(input);

	for (int i = 0; input[i] != NULL; i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			input[i] += 32;

			cnt++;
		}
		
	}

	printf("바뀐 문장: ");
	puts(input);
	printf("바뀐 문자 수: %d", cnt);

	return 0;
}