// 문제 : 사람의 나이를 저장해주세요.
// 조건 : 새로운 배열을 만들어서 사용할 수 없습니다. 

// 입출력예시
/*
사람의 숫자를 입력해주세요. : 7[7[엔터]
3 이하로 입력해주세요.
사람의 숫자를 입력해주세요. : 4[엔터]
3 이하로 입력해주세요.
사람의 숫자를 입력해주세요. : 100[엔터]
3 이하로 입력해주세요.
사람의 숫자를 입력해주세요. : 2[엔터]

1번째 사람의 나이를 입력해주세요 : 33[엔터]
2번째 사람의 나이를 입력해주세요 : 50[엔터]
1번째 사람의 나이 : 33
2번째 사람의 나이 : 50
*/
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#include <stdio.h>
int main(void) {

	int num;
	int people[SIZE];


	printf("사람의 숫자를 입력해주세요 : ");
	scanf("%d", &num);

	if (num > SIZE)
	{
		while(num > SIZE)
		{
			printf("3 이하로 입력해주세요.\n");
			printf("사람의 숫자를 입력해주세요 : ");
			scanf("%d", &num);
		}
	}
	
	for (int i = 0; i < num; i++)
	{
		printf("%d번째 사람의 나이를  입력해주세요 : ", i + 1);
		scanf("%d", people + i);
	}
	for (int i = 0; i < num; i++)
	{
		printf("%d번째 사람의 나이 : %d\n", i + 1, people[i]);
	}

	return 0;
}