// 문제 : 사람을 3명 만들고 각각 다음사람을 가리키게 만들어주세요.
// 조건 : 수정가능지역만 수정가능합니다.
// 힌트 : 포인터 변수에 NULL 을 넣으면 아무것도 안가리킨다는 뜻 입니다.

#include <stdio.h>

// 수정가능지역 시작
// 여기서 구조체를 정의해주세요.
typedef struct _Person {
	char* name;
	struct _Person* next;
} Person;
// 수정가능지역 끝

int main(void) {


	Person p1;
	p1.name = "하나";

	Person p2;
	p2.name = "두나";

	Person p3;
	p3.name = "세나";

	// 수정가능지역 시작
	p1.next = &p2;
	p2.next = &p3;
	p3.next = NULL;
	// 수정가능지역 끝

	printf("마지막 사람의 이름은 %s 입니다.", p1.next->next->name);
	// 출력 : 마지막 사람의 이름은 세나입니다.


	return 0;
}