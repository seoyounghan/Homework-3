#include <stdio.h>
#include <stdlib.h>

void main()
{
	int **x;

	printf("[----[한서영] [2019038038]----]\n");
	printf("size(x)=%lu\n",sizeof(x));//x의 사이즈
	printf("sizeof(*x)=%lu\n", sizeof(*x));//*x의 사이즈
	printf("sizeof(**x)=%lu\n",sizeof(**x));//**x의 사이즈
}
