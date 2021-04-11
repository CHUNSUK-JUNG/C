#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
	char str[256];
	puts("문자열 입력:");
	fgets(str, sizeof(str), stdin);
	printf("배열 길이=%d, ", sizeof(str));
	printf("문자열 길이=%d\n", strlen(str));
	return 0;
}

/* int main()
{
	char buf[100] = { 0 };
	char* str = "Vision";
	printf("이름:");
	scanf("%s", buf);
	getchar();
	printf("%s\n", buf);

	gets(buf);
	puts(buf);

	puts(str);
	puts(str);

	puts("주소:");
	fgets(buf, sizeof(buf), stdin);
	fputs(buf, stdout);
	buf[strlen(buf) - 1] = '\0';
	puts(buf);

	return 0;
} */

/* #define MAX 100

int main()
{
	int n;
	int* ar;
	int i;
	char* buf;
	char str[] = "I can do it!";
	printf("data 갯수:");
	scanf_s("%d",&n);
	ar = (int*)malloc(sizeof(int) * n);
	printf("%d개의 점수 입력:", n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &ar[i]);
	for (i = 0; i < n; i++)
		printf("%5d", ar[i]);
	printf("\n");
	free(ar);

	buf = (char*)malloc(MAX * sizeof(char));
	if (buf = NULL)
	{
		perror("메모리 블록 할당 실패\n");
		exit(1);
	}
	strcpy(buf, str);
	puts(buf);
	free(buf);

	buf = NULL;
	buf = (char*)calloc(MAX, sizeof(char));
	strcpy(buf, str);
	puts(buf);
	free(buf);
	buf = NULL;
	return 0;
} */


/* int main()
{
	int ch;
	printf("한 개의 문자 입력하고 엔터키 누름:");
	scanf_s("%c", &ch);
	getchar();
	printf("입력문자:%c\n", ch);

	printf("한 개의 문자 입력하고 엔터키 누름:");
	ch = getchar();
	printf("입력 문자:"); putchar(ch);
	putchar('\n');

	printf("한 개의 무자 입력 즉시 화면에 표시하지 않고 읽어오기 :");
	ch = getch();
	putch('\n');
	printf("입력 문자:"); 
	putch(ch);
	putch('\n');
	return 0;
} */

/* int main()
{
	char ch = 'A';
	char n = '\0';
	char zero = '0';
	printf("NULL의 정수(아스키)값 : %d, %d, %d, %d\n", n, 0, NULL, zero);
	printf("ch=%c, code=%d\n", ch, ch);
	putchar(ch); putchar(' ');
	putchar(65); printf(" ");
	putchar('A'); printf("\n");
	return 0;
} */

/* int main()
{
	int i, j;
	int ave;
	int sum=0;
	char name[3][10] = { "홍길동","김길동","방길동" };
	char subject[6][10] = { "이름","국어","영어","수학","합계","평균" };
	int in [3][5] = {1,2,3,0,0,4,5,6,0,0,7,8,9,0,0};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			sum += in[i][j];
		ave=sum/3;
		in[i][3] = sum;
		in[i][4] = ave;
		sum = 0;
	}

	for (i = 0; i < 6; i++)
		printf("%12s", subject[i]);
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		printf("%s\t", name[i]);
		for (j = 0; j < 5; j++)
			printf("in[%d][%d]=%3d\t", i, j, in[i][j]);
		printf("\n");
	}
	return 0;
} */


/* int main()
{
	system("cls");
	system("dir");
	system("type C:\Users\PROCESSOR\Desktop\JUNG\EXE\LANGUAGE\C\20210120\Project1\소스.c");
	system("pause");
	return 0;
} */

/* int main()
{
	int a = 88;
	double d = 8.15;
	void* pt;
	pt = &a;
	printf("pt=%d\n", *(int*)pt);
	printf("pt=%#x\n", &pt);
	pt = &d;
	printf("pt=%f\n", *(double*)pt);
	printf("pt=%#x\n", &pt);
	return 0;
} */

/* void f(int a[][3]);
int main()
{
	int a[][3] = { 3,6,9, 2,4,8, 7,14,21, 5,10,15 };
	f(a);
	return 0;
}

void f(int a[][3])
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	return 0;
} */




/* void f(const char a[], int n);
void fr(const char a[], int n);

int main()
{
	char a[]="Worldcup 2002";
	printf("strlen(a)=%d\n", strlen(a));
	f(a, strlen(a));
	fr(a, strlen(a));
	printf("원본 a[]=%s\n", a);
	return 0;
}

void f(const char a[], int n)
{
	int i;
	printf("f함수에서 처리 결과:");
	for (i = 0; i < n; i++)
		printf("%c", a[i]);
	printf("\n");
	return 0;
}

void fr(const char a[], int n)
{
	int i;
	printf("f함수에서 처리 결과:");
	for (i = n-1; i >= 0; i--)
		printf("%c", a[i]);
	printf("\n");
	return 0;
} */


