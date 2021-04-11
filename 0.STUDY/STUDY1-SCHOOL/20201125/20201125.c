#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* int main()
{
	int x=3, y=5, z=10;
	x +=3*x-y;
	printf("x=%d y=%d z=%d\n", x, y, z);
	x=3, y=5, z=10;
	z /=y/5+x+6;
	printf("x=%d y=%d z=%d\n", x, y, z);
	x=3, y=5, z=10;
	y *=z/x<<2;
	printf("x=%d y=%d z=%d\n", x, y, z);
	x=3, y=5, z=10;
	x /=y++/x*--z;
	printf("x=%d y=%d z=%d\n", x, y, z);
	return 0;
} */

/* int main()
{
	char a;
	while(1)
	{
		printf("문자 하나를 입력하세요.\n");
		scanf("%c", &a);
		rewind(stdin); // getchar(); 동일한 의미임

		if(islower(a))
		{
			a=toupper(a);
		}
		else
		{
			a=tolower(a);
		}
		printf("%c\n", a);
	}

	return 0;
} */

/* int main()
{
	int a;
	while(1)
	{
		printf("한 개의 정수를 입력하세요.");
		scanf("%d", &a);
		if(a>0)
		{
			if(a%3==0)
				printf("a는 3의 배수입니다.\n");
			else
				printf("a는 3의 배수가 아닙니다.\n");
		}
		else
			printf("다시 입력하세요.\n");
	}
	return 0;
} */

/* int main()
{
	int a, b, c, max, min;
	while(1)
	{
		printf("세 개의 정수를 입력하세요.");
		scanf("%d %d %d", &a, &b, &c);
		if(a>b && a>c)
		{
			max=a;
		}
		else if (b>a && b>c)
		{
			max=b;
		}
		else
		{
			max=c;
		}

		if (a<b && a<c)
		{
			min=a;
		}
		else if (b<a && b<c)
		{
			min=b;
		}
		else
		{
			min=c;
		}
	    printf("max=%d, min=%d\n",max, min);
	}
	return 0;
} */

/* int main()
{
	int a;
	printf("한개의 정수를 입력하세요.");
	scanf("%d", &a);
	if(a>=0)
		printf("양수입니다.\n");
	else
		printf("음수입니다.\n");
	return 0;
} */


/* int main()
{
	float grade;
	int x;
	while(1)
	{
		printf("점수를 입력하세요.");
		scanf("%f",&grade);
		x=(double)grade/10;
		switch(x)
		{
		  case 10:
		  case 9:
			  printf("A학점입니다.\n");
			  break;
		  case 8:
			  printf("B학점입니다.\n");
			  break;
		  case 7:
			  printf("C학점입니다.\n");
			  break;
		  case 6:
			  printf("D학점입니다.\n");
			  break;
		  default:
			  printf("F학점입니다.\n");
		}
	}
	return 0;
} */


/* int main()
{
	int x;
	while(1)
	{
		printf("0부터 2까지의 정수를 입력하세요.");
	    scanf("%d", &x);
	    switch(x)
	    {
		    case 0:
				printf("사과\n");
			    break;
		    case 1:
			    printf("배\n");
			    break;
		    case 2:
			    printf("딸기\n");
			    break;
		    default:
			    printf("제대로 입력하세요.\n");
		}
	}
} */

/* int main()
{
	int grade=0;
	while(1)
	{
		printf("성적을 입력하세요.(100점 만점):");
	    scanf("%d", &grade);
	    if(grade<0 || grade>100)
			printf("유효한 값이 아닙니다.");
	    else
 	    {
			if(grade>=90)
				printf("A학점입니다.\n");
		    else if(grade>=80)
			    printf("B학점입니다.\n");
		    else if(grade>=70)
			    printf("C학점입니다.\n");
		    else if(grade>=60)
			    printf("D학점입니다.\n");
		    else
			    printf("F학점입니다.\n");
	     }
	}
	return 0;
} */

/* int main()
{
	int x;
	printf("정수 입력:");
	scanf("%d", &x);
	if(x%7==0)
		printf("7의 배수입니다.\n");
	else
		printf("7의 배수가 아닙니다.\n");
	return 0;
} */

/* int main()
{
	int a=1, b=1;
	while(a!=0 && b!=0)
	{
		printf("2개의 정수를 입력하세요.");
	    scanf("%d %d", &a, &b);
	    if(a==b)
	    {
			printf("a와 b는 같다.\n");
	    }
	    else
		    printf("a와 b는 같지 않다.\n");
	}
	return 0;
} */

/* int main()
{
	int age;
	printf("나이 입력(정수로 입력): ");
	scanf("%d", &age);
	if(age>=0)
		printf("투표권이 있습니다.\n");
	else
		printf("투표권이 없습니다.\n");
	return 0;
} */