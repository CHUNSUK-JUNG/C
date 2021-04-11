#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	unsigned char operator;
	int temp, i, mok, na, result ;
	while (1)
	{
		result = 0, mok = 0, na = 0, temp=0;
		printf("2개의 정수 및 연산자(* 또는 / (종료하려면 *,/ 이외를 누르세요.))를 순서 대로 입력 : ");
		scanf_s("%d %d %c", &a, &b, &operator);
		getchar();

		if (operator=='*' || operator=='/') {
			switch (operator) {
			case '*':
				if (abs(a) >= abs(b)) {
					if (b >= 0) {
						for (i = 0; i < b; i++) result += a;
					}
					else {
						for (i = 0; i > b; i--) result += a;
						result = -result;
					}
				}
				else {
					temp = a; a = b; b = temp;
					if (b >= 0) {
						for (i = 0; i < b; i++) result += a;
					}
					else {
						for (i = 0; i > b; i--) result += a;
						result = -result;
					}
					temp = a; a = b; b = temp;
				}
				printf("%d * %d =%d\n", a, b, result);
				break;
			case '/':
				if (b >= 0) {
					if (a == 0 || b == 0);
					else {
						if (abs(a) >= abs(b)) {
							for (i = 0; i < (abs(a)/abs(b)); i++) {
								if (a >= b) {
									na = a - (b * (i + 1));
									mok = i + 1;
								}
								else {
									na = a + (b * (i + 1));
									mok = i + 1;
								}
								if (abs(na) < abs(b)) break;
							}
							if (a >= b);
							else mok = -mok;
						}
						else na=a;
					}
					printf("%d / %d : mok=%d, na=%d\n", a, b, mok, na);
				}
				else {
					if (a == 0);
					else {
						if (abs(a) >= abs(b)) {
							for (i = 0; i < (abs(a)/abs(b)); i++) {
								if (a > b) na = a + (b * (i + 1));
								else na = a - (b * (i + 1));
								mok = i + 1;
								if (abs(na) < abs(b)) break;
							}
							if (a <= b);
							else mok = -mok;
						}
						else na=a;
					}
					printf("%d / %d : mok=%d, na=%d\n", a, b, mok, na);
				}
				break;
			}
		}
		else break;
	}
	return 0;
}