// ���� : �迭�� �Ѽ��ϴ� change �Լ��� ������ּ���.

#include <stdio.h>
// ���⼭ change �Լ��� �������ּ���.

// 1. �迭 ����
int change(int q[]) 
{
	q[0] = 200;
	q[1] = 400;

	return q;
}


// 2. ������ ����

//void change(int q[]) 
// {
//	*(&q[0]) = 200;
//	*(&q[1]) = 400;
// }

int main(void) {

	int x[2];
	x[0] = 100;
	x[1] = 200;
	//int x[2] = {100, 200}; // �� 3 �� �ڵ��� ���� �ǹ��̴�.

	printf("change �Լ��� ȣ���ϱ� ��, x[0] : %d, x[1] : %d\n", x[0], x[1]);

	printf("x�� ũ�� : %lu\n", sizeof(x));

	// ���⼭ change �Լ��� �������ּ���.
	change(x);

	printf("change �Լ��� ȣ���ϱ� ��, x[0] : %d, x[1] : %d\n", x[0], x[1]);
	// ��� => change �Լ��� ȣ���ϱ� ��, x[0] : 200, x[1] : 400

	return 0;
}