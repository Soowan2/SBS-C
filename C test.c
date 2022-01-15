#include <stdio.h>

int main() {

	//  문제 1 : 이번에는 특수문자 출력에 도전하자!!
    //  다음 문장을 출력하시오.
	//	"!@#$%^&*()"
	//	(단, 큰따옴표도 함께 출력한다.)

	
	printf("\"!@#$%%^&*()\"\n"); 

	// "(큰따옴표) 를 출력하려면 \+" 를 이용한다.
	// % 를 출력하기 위해서는 %+% 를 이용한다.
	

	// 문제 2 :윈도우 운영체제의 파일 경로를 출력하는 연습을 해보자.
	// 파일 경로에는 특수문자들이 포함된다.
	// 다음 경로를 출력하시오.
	// "C:\Download\hello.cpp"
	// (단, 큰따옴표도 함께 출력한다.)

	printf("\"C:\\Download\\hello.cpp\"\n");


	// 문제 3 : 이번에는 특수문자를 출력하는 연습을 해보자.
	// 키보드로 입력할 수 없는 다음 모양을 출력해보자.
	// (**참고 : 운영체제의 문자 시스템에 따라 아래와 같은 모양이 출력되지 않을 수 있다.)
	//┌┬┐
	//├┼┤	
	//└┴┘

	printf("\u250c\u252c\u2510\n");
	printf("\u251c\u253c\u2524\n");
	printf("\u2514\u2534\u2518\n");

	// \u 를 사용하여 유니코드로 특수문자를 표현할 수 있다.


}