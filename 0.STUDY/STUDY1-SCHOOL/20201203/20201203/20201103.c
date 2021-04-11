#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* int main()
{
	int x=8;
	while(x<20)
	{
		printf("x:%d\n",x++);
		if(x==10) break;
	}
	return 0;
} */

/* int main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=10;j<13;j++)
			printf("i=%d, j=%d\t",i,j);
		printf("\n");
	}
	return 0;
} */

/* int main()
{
	int num=5;
	int r, c;
	for(r=0;r<num;r++)
	{
		for(c=0;c<num;c++) printf("*");
	    printf("\n");
	}
	return 0;
} */

/* int main()
{
	double n;
	for(n=22.25;n<30;n+=2.25) printf("%.2f\n",n);
	return 0;
} */

/* int main()
{
	int x=1;
	int step=2;
	while(x<10)
	{
		x=x+step;
		step=2*x;
		printf("%5d, %5d\n",x,step);
	}
	return 0;
} */


/* struct point
{
	int x;
	int y;
};
struct circle
{
	struct point pt;
	double r1;
};
int main()
{
	struct circle c1={10,20,5};
	printf("%d, %d, %lf\n",c1.pt.x,c1.pt.y,c1.r1);
	return 0;
} */


/* struct point
{
	int x;
	int y;
};

int main()
{
	int i;
	struct point pt[3]={5,2,3,4,5,6};
	struct point *ptr=pt;
	for(i=0;i<3;i++) printf("%d번째의 좌표:(%d, %d)\n",i+1,(ptr+i)->x,(ptr+i)->y);
	return 0;
} */


/* int main()
{
	int x;
	double y;
	char z;
	for(x=3;x<=9;x++) printf("%5d",x); printf("\n");
	for(x=1;x<=39;x+=3) printf("%5d",x); printf("\n");
	for(x=14;x>=2;x-=2) printf("%5d",x); printf("\n");
	for(y=0.1;y<=1.0;y+=0.5) printf("%7.1f",y); printf("\n");
	for(z='a';z<='g';z++) printf("%5c",z); printf("\n");
	return 0;
} */

/* int main()
{
	int j=12;
	do
	{j+=2; printf("j=%d\n",j);} while(j<8);
	return 0;
} */

/* int main()
{
	int number=5;
	int row=0;
	int col=0;
	while(row<number)
	{
		col=5; // col=0, col<=number, col++
		while(row<col)
		{
			printf("*");
			col--;
		}
		printf("\n");
		row++;
	}
	return 0;
} */


/* int main()
{
	double n=20;
	while(1)
	{
		n=n+2.25;
		if(n>=30.0)
			break;
		printf("%.2f\n",n);
	}
	return 0;
} */

/* int main()
{
	int x=1;
	int step=2;
	while(x<10)
	{
		x=x+step;
		step=2*x;
		printf("x=%d, step=%d\n",x,step);
	}
	return 0;
} */

/* int main()
{
	int x=1;
	while(x<=5)
	{
		printf("[%d]",x);
		x++;
	}
	printf("\n");
	return 0;
} */



/* int main()
{
	int score=1;
	while(score)
	{
		printf("점수를 입력하세요.(0을 입력하면 종료)");
	    scanf("%d", &score);
		if(score==0 || score>100) break;
		switch(score/10)
		{
			case 10: printf("A+ 학점입니다.[%3d]\n",score); break;
			case 9: printf("A 학점입니다.[%3d]\n",score); break;
			case 8: printf("B 학점입니다.[%3d]\n",score); break;
		    case 7: printf("C 학점입니다.[%3d]\n",score); break;
		    case 6: printf("D 학점입니다.[%3d]\n",score); break;
			default: printf("F 학점입니다.[%3d]\n",score); break;
		}
	}
	return 0;
} */

/* int main()
{
	int num;
	while(1)
	{
		printf("정수를 입력하세요.(0또는 음수를 입력하면 종료)");
		scanf("%d",&num);
		if(num<=0) break;
		switch(num%2)
		{
			case 0:	printf("%d는 짝수입니다.\n",num); break;
			case 1:	printf("%d는 홀수입니다.\n",num); break;
		}
	}
	return 0;
} */


/* int main()
{
	int year=1;
	while(year)
	{
		printf("년도를 입력하세요.(0을 입력하면 종료합니다.)");
		scanf("%d",&year);
		if(year==0)
			break;
		else
		{
			if((year%4==0 && year%100 !=0) || year%400==0) printf("%d년은 윤년입니다.\n",year);
		    else printf("%d년은 평년입니다.\n",year);
		}
	}
	return 0;
} */