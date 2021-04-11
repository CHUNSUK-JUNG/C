#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, j;
	int a[] = { 10,20,30 };
	int ar[][3] = { {40,50,60},{70,80,90} };
	int(*pt)[3] = ar;
	int* p[3] = { &a[0],&a[1],&a[2] };

	printf("a=%#x, &a[0]=%#x, &a[1]=%#x\n", &a, &a[0], &a[1]);
	printf("ar=%#x\n", ar);
	printf("*p[0]=%d, *p[1]=%d, *p[2]=%d\n", *p[0], *p[1], *p[2]);

	for (i=0;i<2;i++)
		for (j = 0; j<3; j++)
		{
			printf("a[%d][%d]=%3d\n", i, j, ar[i][j]);
			printf("*(p[%d]+%d)=%3d\n",i,j,*(*(pt+i)+j));
		}
	return 0;
}


/* int main()
{
	int i;
	char menu[5][10] = { "one dog","two dog","three dog","four dog","hot dog" };
	for (i = 0; i < 5; i++)
		printf("menu[%d]=%11s\n", i, menu[i]);
	for (i = 0; i < 5; i++)
		printf("menu[%d]=%#x\n", i, menu+i);
	return 0;
} */

/* void input(int *ptr);
void print(int* ptr);
int sumof(int *ptr);
double aveof(int *ptr);

int main()
{
	int arr[3] = {0};

	input(arr);
	print(arr);
	return 0;
}

void input(int* ptr)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%d번째 점수를 입력하세요.arr[%d]=", i, i);
		scanf_s("%d", ptr + i);
		getchar();
	}
	printf("\n");
	return 0;
}

void print(int* ptr)
{
	int i;
	for (i = 0; i < 3; i++)
		printf("arr[%d]=%d\n", i, ptr[i]);
	printf("\n");
	printf("sum=%d\n", sumof(ptr));
	printf("ave=%.2lf\n", aveof(ptr));
	return 0;
}

int sumof(int *ptr)
{
	int i, sum=0;
	for (i = 0; i < 3; i++)
		sum += ptr[i];
	return sum;
}

double aveof(int *ptr)
{
	int i, sum=0;
	double ave=0;
	for (i = 0; i < 3; i++)
		sum += ptr[i];
	ave = sum / 3.0;
	return ave;
} */

/* void oprint(int*prn);
void xprint(int ar);
void rprint(int*prn);

int main()
{
	int ar[] = { 22,44,66,88,99 };
	oprint(ar);
	xprint(ar);
	rprint(ar);
	return 0;
}

void oprint(int* prn)
{
	int i;
	for (i = 0; i < sizeof(prn); i++)
		printf("arr[%2d]=%2d\n", i, prn[i]);
	printf("\n");
	return 0;
}

void xprint(int ab[])
{
	int i;
	for (i = 0; i <= sizeof(ab); i++)
		printf("arr[%2d]=%2d\n", i, ab[i]);
	printf("\n");
	return 0;
}

void rprint(int* prn)
{
	int i;
	for (i = sizeof(prn); i >= 0; i--)
		printf("arr[%2d]=%2d\n", i, prn[i]);
	printf("\n");
	return 0;
} */


/* void list(int ar[]);

int main()
{
	int a[] = { 5,10,15,20,25 };
	list(a);
	return 0;
}

void list(int ar[])
{
	int i;
	for (i = 0; i < 5; i++)
		printf("ar[%d]=%3d\n", i, ar[i]);
	printf("\n");
} */

/* int main()
{
	int* pt;
	int ar[] = { 10,20,30,40 };
	pt = ar;
	printf("ar[0]=%d, *pt=%d\n", ar[0], *pt);
	printf("%4d, %4d, %4d, %4d\n", ar[0], ar[1], ar[2], ar[3]);
	printf("%4d, %4d, %4d, %4d\n", *ar, *(ar + 1), *(ar + 2), *(ar + 3));
	printf("*pt+1=%d, (*pt)+1=%d\n", *pt + 1, (*pt + 1));
	printf("*(pt+1)=%d\n", *(pt + 1));
	pt += 2;
	printf("*pt=%d\n", *pt);
	*pt = 88;
	printf("*pt-1=%d\n", *pt - 1);
	*pt++;
	printf("*pt=%d\n", *pt);
	(*pt)++;
	printf("(*pt)++=%d\n", *pt);
	return 0;
} */

/* int main()
{
	int ar[2][3] = { {10,20,30},{40,50,60} };
	int i, j;
	printf("ar[0][0]=%#x,%#x,%#x\n", ar, ar[0], &ar[0][0]);
	printf("ar[0]=&ar[0][0],ar[1]=&ar[1][0],ar[2]=&ar[2][0]\n");
	printf("ar[0]=%#x,ar[1]=%#x,ar[2]=%#x\n", ar[0], ar[1], ar[2]);
	printf("*ar=%#x,", *ar);
	printf("ar+1=%#x\n", ar + 1);
	printf("*ar[1]=%3d,", *ar[1]);
	printf("*ar[2]=%3d,\n", *ar[1] + 2);
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("ar[%d][%d]=%d\t", i, j, ar[i][j]);
		}
		printf("\n");
	}
	return 0;
} */