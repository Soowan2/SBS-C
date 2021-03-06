// 문제 : 변수 str1, str2, str4의 값이 같은 이유를 설명해주세요.
// "abc"를 한번 더 선언 할 시 같은 주소값에서 시작하기 때문에 3개는 같은값이다.
#include <stdio.h>

int main(void) {

	char* str1 = "abc";
	printf("str1 : %ld\n", (long)str1);

	char* str2 = "abc";
	printf("str2 : %ld\n", (long)str2);

	char* str3 = "abcd";
	printf("str3 : %ld\n", (long)str3);

	char* str4 = "abc";
	printf("str4 : %ld\n", (long)str4);

	// 배열 선언시에만 리터럴 문자열 대입 가능
	char str5[10] = "abc";
	printf("str5 : %ld\n", (long)str5);


	return 0;
}