#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B, C;
	scanf("%d%d%d", &A, &B, &C);
	printf("%d\n%d\n%d\n%d\n", (A + B) % C, ((A % C) + (B % C)) % C, (A*B) % C, ((A % C) *(B % C)) % C);

}