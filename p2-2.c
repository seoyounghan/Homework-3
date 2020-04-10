#include <stdio.h>

void print1 (int *ptr, int rows);//print 해줄 함수

int main()
{
	int one[]={0,1,2,3,4};//배열 선언과 초기화

	printf("----[한서영] [2019038038]----\n");
	printf("one	=%p\n", one);//one[0]의 주소값 출력
	printf("&one	=%p\n", &one);//one의 주소값
	printf("&one[0] = %p\n",&one[0]);//one[0]의 주소값

	print1(&one[0],5);//함수 호출

	return 0;//외부로 0값 반환
}

void print1(int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */

	int i;
	printf("Address \t Contents\n");
	for (i=0;i<rows;i++)//열만큼 반복
		printf("%p \t %5d\n", ptr + i, *(ptr+i));//포인터 값과 배열의 값 출력
	printf("\n");
}
