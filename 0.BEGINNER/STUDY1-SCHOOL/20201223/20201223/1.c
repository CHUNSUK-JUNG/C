#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, j;
	int matrix_a[3][3] = { 4,5,2,3,10,4,2,15,6 };
	int matrix_b[3][3] = { 2,3,5,5,6,2,3,2,4 };
	int matrix_c[3][3];
	int matrix_d[3][3];
	int matrix_e[3][3];

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];
			matrix_d[i][j] = matrix_a[i][j] - matrix_b[i][j];
			matrix_e[i][j] = matrix_a[i][j] * matrix_b[i][j];
		}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) printf("matrix_a[%d][%d]=%d\t", i, j, matrix_a[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) printf("matrix_b[%d][%d]=%d\t", i, j, matrix_b[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) printf("matrix_c[%d][%d]=%d\t", i, j, matrix_c[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) printf("matrix_d[%d][%d]=%d\t", i, j, matrix_d[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) printf("matrix_e[%d][%d]=%d\t", i, j, matrix_e[i][j]);
		printf("\n");
	}
	printf("\n");

	return 0;
}

/* int main()
{
	int i, j;
	int ar[2][3];
	printf("정수 6개를 입력하세요.");
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &ar[i][j]);
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			printf("ar[%d][%d]=%d\n", i, j, ar[i][j]);
	return 0;
} */

/* int main()
{
	int i, j;
	int ar[3][4] = { 10,20,30,40,15,25,35,45,50,60,70,80 };
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			printf("ar[%d][%d]=%d\n", i, j, ar[i][j]);
	return 0;
} */

/* int main()
{
	int i;
	char str[256];
	printf("영문 문자열(256문자 이하)을 입력해주세요.");
	gets(str);
	for (i = strlen(str)-1; i >=0; i--) printf("%c", str[i]);
	return 0;
} */

/* int main()
{
	int i;
	char str[256];
	printf("영문 문자열(256문자 이하)을 입력해주세요.");
	gets(str);
	for (i = 0; i < strlen(str); i++) printf("%c",str[i]);
	return 0;
} */

/* int main()
{
	int i;
	float num[] = { 3.14,5.25,8.92,4.26,7.32 };
	for (i = 0; i < 5; i++)
		printf("num[%d]=%f\t", i, num[i]);
	return 0;
} */

/* int main()
{
	int i;
	int num[] = { 30,50,60,90,100 };
	for (i = 0; i < 5; i++)
		printf("num[%d]=%d\t", i, num[i]);
	return 0;
} */

/* int main()
{
	int i;
	int sum=0;
	int ar[5]={0,1,2,3,4};
	double average;

	printf("정수 5개를 입력하세요.");
	for(i=0;i<5;i++) {scanf("%d",&ar[i]); sum+=ar[i];}
	average=sum/5.0;
	printf("총계=%d, 평균=%.2f\n",sum,average);
	return 0;
} */

/* int main()
{
	int i, sum=0;
	int ar[5]={1,2,3,4,5};
	for(i=0;i<5;i++) sum+=ar[i];
	printf("총계=%d\n",sum);
	return 0;
} */

/* int main()
{
	int i;
	char str[256];
	printf("I can do it.을 입려하세요.");
	gets(str);
	puts(str);
	return 0;
} */


/* int main()
{
	int i;
	char str[256];
	printf("I can do it.을 입력하세요.:");
	scanf("%[^\n]",str);
	printf("%s\n",str);
	return 0;
} */

/* int main()
{
	char str[]="I can do it.";
	printf("%s\n",str);
	return 0;
} */

/* int main()
{
	int i;
	int word[6];

	printf("문자 6개를 입력:");
	for(i=0;i<6;i++)
	{
		scanf("%c",&word[i]);
		getchar();
	}
	for(i=0;i<sizeof(word)/sizeof(int);i++) printf("%5c",word[i]);
	printf("\n");
	return 0;
} */

/* int main()
{
	int i;
	int character[]={'c','a','n'};
	printf("character 배열의 크기는 : %d byte\n",sizeof(character));
	printf("int형의 크기는 : %d byte\n", sizeof(int));
	for(i=0;i<sizeof(character)/sizeof(int);i++) printf("%5c",character[i]);
	printf("\n");
	return 0;
} */

/* int main()
{
	int i;
	int ar[5];
	printf("정수 5개를 입력:");
	for(i=0;i<5;i++) scanf("%d", &ar[i]);
	for(i=0;i<5;i++) printf("ar[%d]=%d\n",i,ar[i]);
	return 0;
} */

/* int main()
{
	int i;
	int ar[5]={1,2,3,4,5,};
	for(i=0;i<5;i++)
		printf("배열의 %d 번째 요소 : ar[%d]=%d \n",i,i,ar[i]);
	return 0;
} */