#include <stdio.h>

struct student1{
	char lastName;
	int studentId;
	char grade;
};//학생 정보를 담을 구조체

typedef struct {
	char lastName;
	int studentId;
	char grade;
} student2;//학생의 정보를 담을 구조체2

int main() {

	printf("[----[한서영] [2019038038]----]\n");
	struct student1 st1 = {'A',100,'A'};//구조체 선언과 초기화

	printf("st1.lastName = %c\n", st1.lastName);
	printf("st1.studentId = %d\n",st1.studentId);
	printf("st1.grade = %c\n",st1.grade);//구조체에 있는 정보 출력

	student2 st2={'B',200,'B'};//구조체2 선언과 초기화

	printf("\nst2.lastName = %c\n", st2.lastName);
	printf("st2.studentId = %d\n",st2.studentId);
	printf("st2.grade = %c\n", st2.grade);//구조체2에 있는 정보 출력

	student2 st3;//구조체 선언

	st3=st2;//구조체 대입

	printf("\nst3.lastName=%c\n",st3.lastName);
	printf("st3.studentId\%d\n",st3.studentId);
	printf("st3.grade = %c\n",st3.grade);//3번에 있는 정보 확인

	/*equality test */
	
	/*if(st3==st2)//만약 st3과st2가 같으면
		printf("equal\n");
	else//다르다면
		printf("not equal\n");
	*/
	return 0;
}
