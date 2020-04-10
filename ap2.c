#include <stdio.h>
#include <stdlib.h>

void main()
{
	int list[5];//배열 list 선언
	int *plist[5];//포인터 배열 plist선언

	list[0] = 10;//list[0]초기화
	list[1] = 11;//list[1]초기화

	plist[0]=(int*)malloc(sizeof(int));//plist[0]동적할당

	printf("[---- [한서영] [2019038038]----]\n");

	printf("list[0] \t= %d\n", list[0]);//list[0]의 값
	printf("address of list \t=%p\n",list);//list의 주소
	printf("address of list[0] \t= %p\n", &list[0]);//list[0]의 주소
	printf("address of list + 0 \t= %p\n", list+0);//list+0의값,list[0]의 주소
        printf("address of list + 1 \t= %p\n", list+1);//list+1의값,list[1]의 주소
        printf("address of list + 2 \t= %p\n", list+2);//list+2의 값,list[2]의 주소
        printf("address of list + 3 \t= %p\n", list+3);//list+3의 값,list[3]의 주소
        printf("address of list + 4 \t= %p\n", list+4);//list+4의 값,list[4]의 주소
	printf("address of list[4] \t= %p\n", &list[4]);//list[4]의 주소

	free(plist[0]);//plist[0] 할당 해제
}
