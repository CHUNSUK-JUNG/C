#include <stdio.h>

int main()
{
	int i, j;
	for(i=2;i<9;i+=3)
	{
		for(j=1;j<10;j++)
		{
			printf("%d * %d = %d\t", i, j, i*j);
			printf("%d * %d = %d\t", i+1, j, (i+1)*j);
			if(i==8)
			{
				printf("\n");
				continue;
			}
			printf("%d * %d = %d\n", i+2, j, (i+2)*j);
		}
		printf("\n");
	}
	return 0;
}



/* int main()
{
	while(1)
	{
		int i, num, revnum=0;
		printf("10에서 99999999까지의 정수를 입력하세요.(10 미만 또는 100000000 입력하면 종료)");
		scanf("%d",&num);
		if(num<10 || num>100000000) break;
		while(num>0)
		{
			revnum=(revnum*10)+num%10;
			num=num/10;
		}
		printf("숫자 뒤집기:%d\n",revnum);
	}
	return 0;
} */

/* int main()
{
	while(1)
	{
		int i=500, num, sum=0; // i는 빵 1개의 금액, num은 빵의 수량, sum은 합계.
		printf("0에서 100까지의 정수를 입력하세요.(0을 입력하면 종료)");
		scanf("%d",&num);
		if(num==0) break;
	    if(num>=10)
		{
			sum=num*i*0.85;
		}
		else
		{
			sum=num*i;
		}
	    printf("sum=%d\n",sum);
	}
	return 0;
} */


/* int main()
{
	while(1)
	{
		int i, num, sum=0;
		printf("0에서 100까지의 정수를 입력하세요.(0을 입력하면 종료)");
		scanf("%d",&num);
		if(num==0) break;
		for(i=0;i<=num;i++)
		{
			if(i%3==0)
			{
				sum+=i;
			}
		}
		printf("sum=%d\n",sum);
	}
	return 0;
} */




/* int main()
{
	while(1)
	{
		int i, j, num;
		printf("정수 입력(0을 입력하면 종료) : ");
		scanf("%d", &num);
		if(num==0) break;

		for(i=0;i<num;i++)
		{
			for(j=0;j<=i;j++)
			{
				printf("*");
			}
		    printf("\n");
		}
	}
	return 0;
} */

/* int main()
{
	while(1)
	{
		int i, num;
		printf("100 이하의 정수 입력(0을 입력하면 종료) : ");
		scanf("%d", &num);
		if(num<0 || num>100 || num==0) break;
		for(i=1;i<=num;i++)
		if(i%3==0 && i%5==0) printf("15의 배수 i=%d\n",i);
	}
	return 0;
} */

/* int main(void)
{
	while(1)
	{
	    int i, j, num, remainder=0;
		int arr[20]={0};
		printf("정수 입력(0을 입력하면 종료) : ");
		scanf("%d", &num);
		if(num==0) break;
		for(i=0;num>0;i++)
		{
			remainder=num%2;
			arr[i]=remainder;
			num=num/2;
		}
		printf("i=%d    ",i);
		for (j=i-1;j>= 0;j--) printf("%2d", arr[j]);
		printf("(2)\n");
	}
	return 0;
} */

/* int main()
{
	int sum=0;
	int i;
	for(i=100;i>2;i-=2) sum+=i;
	printf("sum=%d, i=%d\n",sum,i);
	return 0;
} */

/* int main()
{
	int sum=0;
	int i;
	for(i=0;i<100;i++) sum+=i;
	printf("sum=%d, i=%d\n",sum,i);
	return 0;
} */

/* int main()
{
	int i=0, sum=0;
	while(i<100)
	{
		sum +=i;
		i++;
	}
    printf("sum=%d, i=%d\n",sum,i);
	return 0;
} */

/* int main()
{
	int x=8;
	while(x<20)
	{
		if(x>10) break;
		printf("x:%d\n",x++);
	}
	return 0;
} */