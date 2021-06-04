// 001 C 프고르램 시작하기
// #include <stdio.h>
// main()
// {
//     printf("hello");
// }

// 002 변수형 개념 배우기
// #include <stdio.h>
// main()
// {
//     int x, y, z;
//     x=1;
//     y=2;
//     z=x+y;
//     printf("%d", z);
// }

// 003 상수형 개념 배우기
// #include <stdio.h>
// #define X 1
// #define PI 3.141592
// main()
// {
//     double z;
//     z=X+PI;
//     printf("%f",z);
// }

// 004 조건문 개념 배우기
// #include <stdio.h>
// main()
// {
//     int x, y;
//     x = 20;
//     y = 10;
//     if(x>y) printf("x의 값이 y의 값보다 큽니다.");
//     else printf("x의 값이 y의 값보다 작거나 같습니다.");
// }

// 006 순환문 개념 배우기
// #include <stdio.h>
// main()
// {
//     int i;
//     int hap=0;
//     for(i=1;i<=10;i++)
//     {
//         hap=hap+i;
//     }
//     printf("1부터 10까지의 합 : %d", hap);
// }

// 007 문자열 개념 배우기
// #include <stdio.h>
// main()
// {
//     printf("대한민국");
// }

// 008 함수 개념 배우기
// #include <stdio.h>
// int hapf(int value);
// main()
// {
//     printf("1부터 10까지의 합은 : %d\n", hapf(10));
//     printf("1부터 100까지의 합은 : %d\n", hapf(100));
//     printf("1부터 1000까지의 합은 : %d\n", hapf(1000));
// }
// int hapf(int value)
// {
//     int i;
//     int hap=0;
//     for(i=1;i<=value;i++) hap=hap+i;
//     return hap;
// }

// 009 주석 개념 배우기
// #include <stdio.h>
// main()
// {
//     int i; // 정수형 변수 i를 정의합니다.
//     int hap=0; // 정수형 변수 hjap을 정의하고, 0으로 초기화합니다.
//     /*
//     for 문은 다음처럼 실행합니다.
//     1. i에 1을 초기값으로 설정합니다.
//     2. i가 10보다 작거나 같을 때까지만 순환문을 반복합니다.
//     3. 현재의 hap의 값과 i값을 더하여 hap에 대입합니다.
//     4. i는 1씩 증가합니다.
//     */
//     for(i=1;i<=10;i++) hap=hap+i; //hap과 i를 더하여 hap에 대입합니다.
//     printf("1부터 10까지의 합은 : %d", hap); //1부터 10까지의 합 55가 화면에 표시됩1니다.
// }

// 010 컴파일 개념 배우기
// #include <stdio.h>
// main()
// {
//     int i;
//     int hap=0;
//     for(i=1;i<=10;i++) hap=hap+i;
//     printf("1부터 10까지의 합은 : %d", hap);
// }

// 011 문자형 변수 이해하기(char)
// #include <stdio.h>
// main()
// {
//     char ch;
//     unsigned char j;
//     char k;
//     ch=200;
//     j=200;
//     k='d';
//     printf("ch:%d\n", ch);
//     printf("j:%d\n", j);
//     printf("k:%d\n", k);
// }

// 012 정수형 변수 이해하기(int)
// #include <stdio.h>
// main()
// {
//     int i;
//     unsigned int j;
//     int k;
//     i=2000000000;
//     j=4000000000;
//     k='b';
//     printf("i : %d\n", i);
//     printf("j : %d\n", j);
//     printf("k : %d\n", k);
// }

// 013 실수형 변수 이해하기(double)
// #include <stdio.h>
// main()
// {
//     float d;
//     double d1;
//     double d2;
//     d=3.141592;
//     d1=1234567890;
//     d2='c';
//     printf("d : %e\n", d);
//     printf("d1 : %e\n", d1);
//     printf("d2 : %e\n", d2);
// }

// 014 논리형 변수 이해하기(bool)
// #include <stdio.h>
// main()
// {
//     int b;
//     int j;
//     b=10>5;
//     j=10>20;
//     printf("b : %d\n", b);
//     printf("j : %d\n", j);
//     if(b) printf("10>5의 식은 참입니다.\n");
//     else printf("10>5의 식은 거짓입니다.\n");
//     if(j) printf("10>20의 식은 참입니다.\n");
//     else printf("10>20의 식은 거짓입니다.\n");
//     if(-1) printf("-1은 참입니다.\n");
//     else printf("-1은 거짓입니다.\n");
// }

// 015 문자열형 변수 이해하기(char*)
// #include <stdio.h>
// main()
// {
//     char str[]="대한민국";
//     char* j="I Love Korea";
//     printf("str : %s\n", str);
//     printf("j : %s\n", j);
// }

// 016 문자형 상수 이해하기(char)
// #include <stdio.h>
// #define HUNDRED 100
// const char j=10;
// main()
// {
//     // HUNDRED = 200;
//     // j=200;
//     printf("HUNDRED : %d\n", HUNDRED);
//     printf("j : %d\n", j);
// }

// 017 정수형 상수 이해하기(int)
// #include <stdio.h>
// #define HUNDRED_THOUSAND 100000
// const int j=200000;
// main()
// {
//     // HUNDRED_THOUSAND = 100000;
//     // j = 200000;
//     printf("HUNDRED_THOUSAND :%d\n", HUNDRED_THOUSAND);
//     printf("j :%d\n", j);
// }

// 018 실수형 상수 이해하기(double)
// #include <stdio.h>
// #define PI 3.141592
// const double j=1.23456789;
// main()
// {
//     // PI=3.141592;
//     // j=1.23456789;
//     printf("PI : %f\n", PI);
//     printf("j : %f\n", j);
// }

// 019 논리형 상수 이해하기(bool)
// #include <stdio.h>
// #define TRUE 1
// #define FALSE 0
// main()
// {
//     if(TRUE) printf("TRUE\n");
//     else printf("FALSE\n");
//     if(FALSE) printf("FALSE\n");
//     else printf("TRUE\n");
// }

// 202 문자열형 상수 이해하기(char)
// #include <stdio.h>
// #define KOREA "KOREA"
// #define BOOK "THIS IS A BOOK"
// const char* SOCCOR="SOCCOR";
// main()
// {
//     printf("KOREA : %s\n", KOREA);
//     printf("BOOK : %s\n", BOOK);
//     printf("SOCCOR : %s\n", SOCCOR);
// }

// 021 대입연산자 이해하기(=)
// #include <stdio.h>
// main()
// {
//     int x=1, y=2, z, zz;
//     z=x+y;
//     zz=printf("z : %d\n", z);
//     printf("zz : %d\n", zz);
// }

// 022 부호 연산자 이해하기(+, -)
// #include <stdio.h>
// main()
// {
//     int x=+4;
//     int y=-2;
//     printf("x+(-y)=%d\n", x+(-y));
//     printf("-x+(-y)=%d\n", -x+(-y));
// }

// 023 사칙연산자 이해하기(+, -, *, /)
// #include <stdio.h>
// main()
// {
//     int x=4;
//     int y=2;
//     int z;
//     z=x+y;
//     printf("%d\n", z);
//     z=x-y;
//     printf("%d\n", z);
//     z=x*y;
//     printf("%d\n", z);
//     z=x/y;
//     printf("%d\n", z);
//     z=x%y;
//     printf("%d\n", z);
// }

// 024 증감 연산자 이해하기(++, --)
// #include <stdio.h>
// main()
// {
//     int x=1;
//     printf("x++=%d\n", x++);
//     printf("++x=%d\n", ++x);
//     printf("x--=%d\n", x--);
//     printf("--x=%d\n", --x);
// }

// 024 관계 연산자 이해하기(<, >, <=, >=, !=)
// #include <stdio.h>
// main()
// {
//     int x=1, y=2, z=3;
//     if(x==y) printf("x=y\n");
//     if(x!=y) printf("x!=y\n");
// }

// 026 논리 연산자 이해하기(||, &&, !)
// #include <stdio.h>
// main()
// {
//     int x=5, y=2;
//     if(x>0 && x<10) printf("0<x<10\n");
//     if(x<0 || y==2) printf("x가 0보다 작거나 y는 2이다.\n");
//     if(!(x>y)) printf("x가 y보다 크지 않습니다.\n");
// }

// 027 조건 연산자 이해하기(?:)
// #include <stdio.h>
// main()
// {
//     int x=1, y=2, max;
//     max = x>y ? x:y;
//     printf("%d", max);
// }

// 028 쉼표 연산자 이해하기(,)
// #include <stdio.h>
// main()
// {
//     int x=1, y=2, max;
//     max = x>y ? x:y;
//     printf("max=%d", max);
// }

// 029 비트 연산자 이해하기(|, &, ~, ^, <<, >>)
// #include <stdio.h>
// main()
// {
//     unsigned char ch=255, mask=0x7f;
//     printf("%d\n", ch);
//     printf("%d\n", ch & mask);
//     printf("%d\n", ch ^ ch);
//     printf("%d\n", ch>>1);
//     printf("%d\n", ch<<1);
//     printf("%d\n", mask<<1);
// }

// 030 캐슽 연산자 이해하기
// #include <stdio.h>
// main()
// {
//     int x=5, y=2;
//     printf("%d\n", x/y);
//     printf("%f\n", (double)x/y);
// }

// 031 sizeof 연산자 이해하기
// #include <stdio.h>
// main()
// {
//     char i;
//     int j;
//     double k;
//     printf("%d\n", sizeof(i));
//     printf("%d\n", sizeof(j));
//     printf("%d\n", sizeof(k));
// }

// 032 중첩 조건문 이해하기(if~else)
// #include <stdio.h>
// main()
// {
//     int i=1, j=2, k=7;
//     if(i==1)
//     {
//         if(j==2)
//         {
//             if(k==3)
//                 printf("%d, %d, %d", i, j, k);
//             else if(k==4)
//                 printf("%d, %d, %d", i, j, k);
//             else if(k==5)
//                 printf("%d, %d, %d", i, j, k);
//             else
//                 printf("%d, %d, %d", i, j, k);
//         }
//     }
// }

// 033 중첩 순환문 이해하기(for~continue~break)
// #include <stdio.h>
// main()
// {
//     int i, j;
//     for(i=1;i<=9;i++)
//     {
//         for(j=1;j<=9;j++)
//         {
//             printf("%d * %d = %d\n", i, j, i*j);
//         }
//         printf("\n");
//     }
// }

// 034 조건 선택문 이해하기(switch~case~default)
// #include <stdio.h>
// main()
// {
//     int i=5;
//     switch(i)
//     {
//         case 1:
//             printf("i는 1입니다.");
//             break;
//         case 2:
//             printf("i는 2입니다.");
//             break;
//         default:
//             printf("i는 %d입니다.", i);
//             break;
//     }
// }

// 035 조건 순환문 이해하기1(while~continue~break)
// #include <stdio.h>
// main()
// {
//     int i=1, hap=0;
//     while(i<=10)
//     {
//         hap=hap+i;
//         i++;
//     }
//     printf("hap=%d", hap);
// }

// 036 조건 순환문 이해하기2(do~while~continue~break)
// #include <stdio.h>
// main()
// {
//     int i=1, hap=0;
//     do
//     {
//         hap=hap+i;
//         i++;
//     } while (i<=10);
//     printf("hap=%d", hap);
// }

// 037 무조건 분기문 이해하기
// #include <stdio.h>
// main()
// {
//     int i, j;
//     for(i=1;i<=100;i++)
//     {
//         for(j=1;j<=9;j++)
//         {
//             printf("%d * %d = %2d\n", i, j, i*j);
//             if(i==9 && j==9) goto end;
//         }
//     }
// end:;
// }

// 038 문자열 이해하기
// #include <stdio.h>
// #define ASCII_BEGIN 0
// #define ASCII_END 255
// main()
// {
//     int i;
//     for(i=ASCII_BEGIN;i<=ASCII_END;i++) printf("ASCII CODE (%d), '%c'\n", i, i);
// }

// 039 배열 이해하기
// #include <stdio.h>
// main()
// {
//     int kor[10]={10,20,55,65,55,65,70,80,90,100};
//     int i;
//     for(i=0;i<10;i++) printf("%d\n",kor[i]);
// }

// 040 메모리 이해하기
// #include <stdio.h>
// main()
// {
//     int i=0, j=1;
//     printf("%d, %p\n", i, &i);
//     printf("%d, %p\n", j, &j);
// }

// 041 포인터 이해하기
// #include <stdio.h>
// main()
// {
//     int a=0;
//     int b=0;
//     int* pa;
//     int* pb;
//     pa=&a;
//     *pa=1;
//     printf("%d, %d\n", a, *pa);
// }

// 042 널(NULL) 문자 이해하기
// #include <stdio.h>
// int length(char* pt);
// int main()
// {
//     int len=length("abcde");
//     printf("%d", len);
//     return 0;
// }
// int length(char* pt)
// {
//     int len=0;
//     while(*pt != 0)
//     {
//         pt++;
//         len++;
//     }
//     return len;
// }

// 043 구조체 이해하기
// #include <stdio.h>
// struct sungjuk 
// {
//     int kor, eng, math;
// };
// main()
// {
//     struct sungjuk sj;
//     sj.kor=100;
//     sj.eng=90;
//     sj.math=85;
//     printf("total=%d", sj.kor+sj.eng+sj.math);
// }

// 044 공용체 이해하기
// #include <stdio.h>
// union abc
// {
//     int a;
//     float b;    
// };
// main()
// {
//     union abc v;
//     v.a=0;
//     v.b=5.5;
//     printf("v.a=%d\n", v.a);
//     printf("v.b=%f\n", v.b);
// }

// 045 열거형 이해하기
// #include <stdio.h>
// enum {sun, mon, tue, wed, thr, fri, sat};
// main()
// {
//     printf("%d\n", sun);
//     printf("%d\n", mon);
// }

// 046 데이터형 정의하기
// #include <stdio.h>
// #define true 1
// #define false 0
// typedef int bool;
// main()
// {
//     bool a;
//     a=true;
//     if(a==true) printf("true");
// }

// 047 함수와 인수 이해하기
// #include <stdio.h>
// int print(char* string);
// main()
// {
//     print("THIS IS A FUNCTION!");
// }
// int print(char* string)
// {
//     int len=0;
//     while(*string != '\0')
//     {
//         printf("%c", *string);
//         string++;
//         len++;
//     }
//     return len;
// }

// 048 변수의 범위 이해하기
// #include <stdio.h>
// int x=20;
// main()
// {
//     int x=5;
//     printf("x=%d\n", x);
// }

// 049 #includ 문 이해하기
// #include <stdio.h>
// #include <conio.h>
// main()
// {
//     int ch;
//     printf("press any key...\n");
//     ch=getch();
//     printf("%c key pressed", ch);
// }

// 050 매크로 이해하기
// #include <stdio.h>
// #define MAX(a,b) a>b ? a:b
// #define MIN(a,b) a<b ? a:b
// main()
// {
//     int i, j;
//     i = 5;
//     j = 7;
//     printf("max=%d\n", MAX(i,j));
//     printf("min=%d\n", MIN(i,j));
// }

