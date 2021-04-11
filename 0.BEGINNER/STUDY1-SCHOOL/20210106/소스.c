#include <stdio.h>

/* void f(void);
int fn(int x);
int x = 1;

int main()
{
	int a = 2, n;
	f();
	printf("main;%d\n", a);
	n = fn(a);
	printf("fn:3 x %d=%d\n", a, n);
	return 0;
}

void f()
{
	int x = 8;
	printf("f:%d\n", x);
}

int fn(int x)
{
	return 3 * x;
} */

/* void swap(int* px, int* py);

int main()
{
	int x = 3, y = 7;
	printf("호출전, x:%d, y:%d\n", x, y);
	swap(&x, &y);
	printf("호출후, x:%d, y:%d\n", x, y);
	return 0;
}

void swap(int* px, int* py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
} */

/* int cube(int x);
int main()
{
	int a = 2;
	int b = 0;
	b = cube(a);
	printf("%d, %d \n", a, b);
		return 0;
}

int cube(int x)
{
	x = 5;
	return x * x * x;
} */

/* void fn();

int main()
{
	fn();
	return 0;
}

void fn()
{
	printf("vision\n");
} */


/* int add(int x, int y);

int main()
{
	int a = 5, b = 3;
	int dap;
	dap = add(a, b);
	printf("%d+%d=%d\n", a, b, dap);
	return 0;
}

int add(int x, int y)
{
	int result = x + y;
	return result;
} */