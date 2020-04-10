#include <stdio.h>

struct student{
	char lastName[13];   /*13 bytes */
	int studentId;    /*4bytes */
	short grade;    /*2 bytes*/
};//학생 정보를 담을 구조체

int main()
{
	struct student pst;//구조체 선언

	printf("[----[한서영] [2019038038]----]\n");
	printf("size of student =%ld\n", sizeof(struct student));
	printf("size of int = %ld\n", sizeof(int));
	printf("size of short = %ld\n", sizeof(short));//각각 구조체 변수의 크기 출력

	return 0;
}
