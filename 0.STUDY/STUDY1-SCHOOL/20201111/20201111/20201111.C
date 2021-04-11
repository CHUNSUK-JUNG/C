#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a[5]={0}, i=0, min=101, max=0;

	while(1)
	{
		for(i=0;i<5;i++);
		{
			printf("1-100 사이의 숫자 5개를 입력하세요.:");
			scanf("%d",&a[i]);

			if(a[i]<0 || a[i]>100)
			{
				printf("처음부터 입력하세요.");
				break;
			}
			else
			{
				if(a[i] > max)
					max=a[i];
				if(a[i] < min)
					min=a[i];
			}
		}
		printf("min=%d",min);
		printf("max=%d",max);
		break;
	}
		return 0;
}

/* #include <stdio.h>
main()
{
	int a=12,b=10,c=0;
	c=a&b;
	printf("%d\n",c);
	c=a|b;
	printf("%d\n",c);
	c=a^b;
	printf("%d\n",c);
	c=~a;
	printf("%#x %d\n",c,c);
} */


/* #include <stdio.h>

main()
{
	int a=10;
	int b=5;

	printf("%d %d %d\n", (a>=9&&a<=45),(a>=2||a<9),!a);
	printf("%d %d %d\n", (b>=9&&b<=45),(b>=2||b<9),!b);
} */

/* #include <stdio.h>
main()
{
	int a=6, b=4, c;
	double d, e;

	d=(double)a/(double)b;
	e=a/b;
	c=a%b;
	printf("%d %d %f %f %d\n",a, b, d, e, c);
} */

/* #include <stdio.h>
main()
{
	int x,y,a,b,c,d;
	x=y=7;
	a=x++;
	b=++y;
	printf("a=%d, x=%d\n",a,x);
	printf("b=%d, y=%d\n",b,y);
	x=y=7;
	c=x--;
	d=--y;
    printf("c=%d, x=%d\n",c,x);
	printf("d=%d, y=%d\n",d,y);
} */

/* #include <stdio.h>
main()
{
	int y=5;
	printf("y=%d\n",y);
	printf("y＋1=%d\n",y+=1);
	printf("y-1=%d\n",y-=1);
	printf("y*2=%d\n",y*=2);
	printf("y/2=%d\n",y/=2);
	printf("y%%3=%d\n",y%=3);
} */

/* #include <stdio.h>
main()
{
	int a, b;
	printf("두개의 숫자를 입력하세요.:");
	scanf("%d %d",&a, &b);
	printf("%d+%d=%d\n",a,b,a+b);
	printf("%d-%d=%d\n",a,b,a-b);
	printf("%d*%d=%d\n",a,b,a*b);
	printf("%d/%d=%d\n",a,b,a/b);
	printf("%d%%%d=%d\n",a,b,a%b);
	printf("%d/%d=%f\n",a,b,(double)a/(double)b);
} */

/* #include <stdio.h>
main()
{
	char a[300]={0};
	char b[300]={0};
	printf("주소 입력:");
	scanf("%s",a);
	printf("주소:%s\n",a);
    getchar();
	printf("주소 입력:");
	gets(b);
	puts(b);
} */

/* #include <stdio.h>
main()
{
	char a[30]={0};
	printf("문자열을 입력하세요:");
	gets(a);
	printf("a=");
	puts(a);
} */

/* #include <stdio.h>
main()
{
	char a[30]={0};
    char b[30]={0};
	printf("문자열을 입력하세요:");
	scanf("%[^\n]",a);
	getchar();
	printf("a=%s\n",a);
    printf("문자열을 입력하세요:");
	scanf("%[^\n]",b);
	getchar();
	printf("a=%s\n",b);
} */

/* #include <stdio.h>
main()
{
	int y,m,d;
	char a[20]={0}, b[20]={0};
	printf("년-월-일 형식으로 입력:");
	scanf("%d-%d-%d", &y, &m, &d);
	printf("%5d%5d%5d\n",y,m,d);
	getchar();
	printf("년/월/일 형식으로 입력:");
	scanf("%d/%d/%d",&y,&m,&d);
	printf("%5d%5d%5d\n",y,m,d);
	getchar();
	printf("시:분:초 형식으로 입력:");
	scanf("%d:%d:%d", &y,&m,&d);
    printf("%5d%5d%5d\n",y,m,d);
	fflush(stdin);
	printf("abcdend 입력:");
	scanf("%[a-d]",&a);
	fflush(stdin);
	printf("a=%s\n",a);
	printf("lovebig 입력:");
	scanf("%[^abc]",&b);
	printf("b=%s\n",b);
} */

/* #include <stdio.h>
int main()
{
	char a, b;
	int c,d,e;
	float f;
	double g;
	printf("5,2,8입력:");
	scanf("%d,%d,%d",&c,&d,&e);
	printf("c=%d, d=%d, e=%d\n",c,d,e);
	getchar();

	printf("문자 두개 입력(a,b):");
	scanf("%c, %c",&a,&b);
	printf("첫문자:%c, 다음문자:%c\n",a,b);
	printf("34.567,24.93 입력:");
	scanf("%f,%lf",&f,&g);
	printf("f:%.3f, g:%.2f\n",f,g);
	return 0;
} */