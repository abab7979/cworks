#define _CRT_SECURE_NO_WARNINGS  //에러
#include <stdio.h>
#include "person.h"
#include <string.h>
#include <stdlib.h>


int main() {
	//객체 동적으로 생성
	Person* p1 = (Person*)malloc(sizeof(Person));
	if (p1 == NULL) {
		printf("동적메모리 할당에 실패하였습니다.\n");
		exit(1);
	}

	//자료저장
	strcpy(p1->name, "더조은");
	p1->age = 31;
	strcpy(p1->address, "서울시 노원구 상계동");

	//자료 출력
	printf("이름 : %s\n", p1->name);
	printf("나이 : %d\n", p1->age);
	printf("주소 : %s\n", p1->address);

	free(p1);
	return 0;
}