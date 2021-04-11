#include <stdio.h>

/* int main()
{
	int var = 24, y = 33, z;
	int* pt, * p;
	pt = &var;
	y = *pt;
	printf("var 메모리 시작 주소:%#p\n",&var);
	printf("pt 메모리 시작 주소:%#p\n", pt);
	printf("var=%d, *pt=%d\n", var, *pt);
	printf("*pt+2=%d\n", *pt + 2);
	printf("*(pt+2)=%d\n", *(pt + 2));
	*pt = 88;
	printf("*pt=%d\n", *pt);
	z = *(&y);
	printf("z=%d\n", z);
	p = &*pt;
	printf("p=%#x\n", p);
	return 0;
} */

/* int max(int x, int y);
int min(int x, int y);
int main()
{
	while (1)
	{
		int x, y;
		printf("2개의 정수를 입력하세요.(0 0을 입력하면 종료.)");
		scanf_s("%d %d", &x, &y);
		getchar();
		if (x == 0 && y == 0) break;
		max(x, y);
		min(x, y);
	}
	return 0;
}

int max(int x, int y)
{
	if (x > y) printf("최대값은 %d 이다.\n", x);
	return 0;
}

int min(int x, int y)
{
	if (x < y) printf("최소값은 %d 이다.\n", x);
	return 0;
} */

/* int hardcopy(int arr[4][3]);
int main()
{
	int arr[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	hardcopy(arr);
	return 0;
}
int hardcopy(int arr[4][3])
{
	int i, j;
	for(i=0;i<4;i++)
		for(j=0;j<3;j++) printf("arr[%d][%d]=%d\n", i,j,arr[i][j]);
	return 0;
} */

/* int plus(int x, int y);
int minus(int x, int y);
int multi(int x, int y);
int sub(int x, int y);

int main()
{
	while (1)
	{
		int x, y;
		char op;
		printf("2개의 정수를 입력하세요.(0 0을 입력하면 종료)");
		scanf_s("%d %d", &x, &y);
		getchar();
		if (x == 0 && y == 0) break;
		printf("연산자(+, -, *, /)를 입력하세요.");
		scanf_s("%c", &op);
		switch (op)
		{
		case '+':
			plus(x,y);
			break;
		case '-':
			minus(x, y);
			break;
		case '*':
			multi(x, y);
			break;
		case '/':
			sub(x, y);
			break;
		}
	}
	return 0;
}

int plus(int x, int y)
{
	int result;
	result = x + y;
	return printf("x+y=%d\n", result);
}
int minus(int x, int y)
{
	int result;
	result = x - y;
	return printf("x-y=%d\n", result);
}
int multi(int x, int y)
{
	int result;
	result = x * y;
	return printf("x*y=%d\n", result);
}
int sub(int x, int y)
{
	int result;
	result = x / y;
	return printf("x/y=%d\n", result);
} */



/* long factorial(unsigned long number);
int main()
{
	int i;
	for (i = 0; i <= 12; i++)
		printf("%2d !=%d\n", i, factorial(i));
	return 0;
}

long factorial(unsigned long number)
{
	if (number <= 1)
		return 1;
	else
		return number * factorial(number - 1);
} */

/* void fn();
int main()
{
	fn();
	fn();
	fn();
	return 0;
}
void fn()
{
	static int count = 1;
	printf("fn:%d\n", count);
	count++;
} */

/* void f();
void fn();
int main()
{
	int x = 8;
	printf("x=%d\n", x);  //8
	f();  //35
	printf("x=%d\n", x);  //8
	fn();  //28
	printf("x=%d\n", x);  //8
	fn();  //38
	return 0;
}
int x = 35;
void f()
{
	printf("f:x=%d\n", x);
	x = 28;
}
void fn()
{
	printf("fn:x=%d\n", x);
	x = 38;
} */