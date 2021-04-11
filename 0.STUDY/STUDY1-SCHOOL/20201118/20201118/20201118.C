#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

/* int main()
{
	int i;
	srand((unsigned)time(NULL));
	for(i=0;i<25;i++) printf("%6d\n",rand()%179+27); // min 에서 max 까지 난수 발생 식 : (max-min+1)+min
	return 0;
} */

/* int main()
{
	int i=0;
	char str[100]="";
	gets(str);
	for (i=0;str[i];i++)
	{
		if(isupper(str[i])) str[i]=tolower(str[i]);
		else if(islower(str[i])) str[i]=toupper(str[i]);
	}
	puts(str);
	return 0;
} */

/* int main()
{
	float a, b, c, sum, ave;
	scanf("%f %f %f", &a, &b, &c);
	sum=a+b+c;
	ave=sum/3;
	printf("%f %f", sum, ave);
	return 0;
} */

/* int main()
{
	float c, f;
	scanf("%f", &f);
	c=((float)5/(float)9)*(f-32);
	printf("%f",c);
	return 0;
} */

/* int main()
{
	float x, y;
	scanf("%f",&x);
	y=(2*pow(x,3))+(3*pow(x,2))+(4*pow(x,1))+(pow(x,-1));
	printf("%f",y);
	return 0;
} */

/* int main()
{
	int s, s1, s2, m1, m2, h;
	scanf("%d",&s);
	s1=s%60;
	s2=s-s1;
	m1=s2/60;
    m2=m1%60;
	h=m1/60;
	printf("%d %d %d",s1,m2,h);
} */

/* int main()
{
	float a, b, c;
	scanf("%f",&a);
	b=a/2.54;
	c=b/12;
	printf("%.2f %.2f %.2f", a,b,c);
	return 0;
} */


/* int main()
{
	float a=3, b=2;
	printf("%f\n",a/b);
	return 0;	
} */

/* int main()
{
	int a, b, c, d;
	printf("두개의 정수값을 입력하고 Enter키를 누르세요:");
	scanf("%d %d", &a, &b);
	c=(a>b)? a:b;
	d=(a<b)? a:b;
	printf("%d\n",c);
	printf("%d\n",d);
	return 0;
} */
/* int main()
{
	char a=0xAE;
	printf("%#X\n", a<<1);
	printf("%#X\n", a<<2);
	printf("%#X\n", a<<3);
	printf("%#X\n", a<<4);
	printf("%#X\n", a>>1);
	printf("%#X\n", a>>2);
	printf("%#X\n", a>>3);
	printf("%#X\n", a>>4);
	return 0;
} */