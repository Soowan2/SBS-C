#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(n) / sizeof(int));
    for (int i = 0; i < n; i++)
    {
        answer[i] = '수';

        if (i % 2 != 0)
        {
            answer[i] = '박';
        }
    }
    return answer;
}