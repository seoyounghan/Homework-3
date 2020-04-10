#include <stdio.h>
#include <stdlib.h>

void main()
{
	int list[5];//정수형 배열 list
	int *plist[5] = {NULL,};//포인터 배열 plist

	plist[0] = (int *)malloc(sizeof(int));//plist[0]에 동적 할당

	list[0] = 1;//list[0] 초기화
	list[1]=100;//list[1] 초기화

	*plist[0] = 200;//plist[0]에 200 초기화

	printf("[---- [한서영]  [2019038038] ----]");
	printf("value of list[0] = %d\n", list[0]);//list[0]의 값
	printf("address of list[0]	=%p\n",&list[0]);//list[0]의 주소
	printf("value of list		=%p\n",list);//list의 값(list[0]의 주소)
	printf("address of list (&list) =%p\n",&list);//list의 주소

	printf("-------------------------------------\n\n");
	printf("value of list[1] =%d\n", list[1]);//list[1]의 값
	printf("address of list[1] = %p\n",&list[1]);//list[1]의 주소(list[0]의 주소+4)
	printf("value of *(list+1) = %d\n", *(list + 1));//list+1의 주소(list[1]의 주소)
	printf("address of list+1 = %p\n", list+1);//list+1의 주소(list[1]의 주소)

        printf("-------------------------------------\n\n");

	printf("value of *plist[0] = %d\n", *plist[0]);//plist[0]의 값
	printf("&plist[0]	   = %p\n",&plist[0]);//plist[0]의 주소
	printf("&plist		   = %p\n",&plist);//plist의 주소
	printf("plist		   = %p\n",plist);//plist[0]의 주소
	printf("plist[0]	   = %p\n",plist[0]);//plist[0]의 값,*plist[0]의 주소
	printf("plist[1]           = %p\n",plist[1]);//plist[1]의 값
        printf("plist[2]           = %p\n",plist[2]);//plist[2]의 값
        printf("plist[3]           = %p\n",plist[3]);//plist[3]의 값
        printf("plist[4]           = %p\n",plist[4]);//plist[4]의 값
	
	free(plist[0]);//plist[0] 해제
}
