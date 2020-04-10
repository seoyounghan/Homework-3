#include <stdio.h>

#define MAX_SIZE 100

float sum(float [],int);//함수 선언
float input[MAX_SIZE], answer;
int i;
void main(void)
{
	printf("[----[한서영] [2019038038]----]");
	for(i=0; i< MAX_SIZE;i++)//MAX_SIZE 만큼 반복
		input[i]=i;//초기화

	/* for checking call by reference
	  printf("address of input = %p\n",input);
	 */

	answer=sum(input, MAX_SIZE);//함수 사용
	printf("The sum is: %f\n", answer);//합계 구함
}

float sum(float list[], int n)
{
	/*
	printf("value of list = %p\n", list);
	printf("address of list = %p\n\n", &list);
	*/

	int i;//i 선언
	float tempsum = 0;//tempsum 초기화
	for(i = 0;i < n; i++)
		tempsum += list[i];//tempsum에 값을 더함
	return tempsum;
}
