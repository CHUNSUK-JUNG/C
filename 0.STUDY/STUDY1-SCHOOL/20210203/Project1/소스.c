#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning(disable:4996)

int main()
{
	int a, i;
	char b[7];
	printf("정수 6자리를 입력하세요.");
	scanf("%d", &a);
	itoa(a, b, 10);
	printf("%d %d\n", sizeof(a), strlen(b));
	printf("%s", b);
	return 0;
}


/* int main()
{
	int i, j, k, m, n;
	char x[4], y[6];
	char str[1024] = "77, 88 33 55";
	char buf[1024] = { 0 };
	char* tmp = str;
	char format[] = "%d %d %d %d\n";

	sscanf(str, "%d%*c%d%d%d", &j, &k, &m, &n);
	sprintf(tmp, format, j, k, m, n);
	puts(tmp);
	sscanf(str, "%d", &j);
	sscanf(str, "%d", &k);
	printf("포인터 이동이 없어서 같다. : %d %d \n", j, k);
	sscanf(str, "%d %d %d %d", &j, &k, &m, &n);
	printf(format, j, k, m, n);
	sprintf(str, "%3d%5.2f%10s\n", 123, 8.15, "vision");
	puts(str);
	sscanf(str, "%3s%5s%15s", x, y, buf);
	printf("%d %.2f %s\n", atoi(x), atof(y), buf);
	return 0;
} */

/* int main()
{
	int i, radix = 16;
	char str[256] = "16fe34";
	char* stop;
	long convert;

	stop = (char*)malloc(sizeof(char) * (strlen(str) + 1));
	printf("%d %d\n", sizeof(str), sizeof(stop));
	printf("%d\n", atoi(str));
	convert = atoi(str);
	printf("%d\n", convert);
	itoa(convert, stop, 2);
	puts(stop);
	convert = strtol(str, &stop, 16);
	printf("16진수 %s는 10진수 %d 이다.\n", str, convert);
	for (i = 0; i < strlen(str) - strlen(stop) ; i++)
		printf("%c", str[i]);
	printf("(%d)\t -> \t%li (10진수)\n", radix, convert);

	return 0;
} */

/* int main()
{
	char str1[1024];
	char str2[1024];
	char result;

	puts("문자열 입력");
	fgets(str1, sizeof(str1), stdin);

	puts("비교할 문자열 입력");
	fgets(str2, sizeof(str2), stdin);

	result = strcmp(str1, str2);

	printf("%s\n", result);

	if (!strcmp(str1, str2))
		puts("동일한 문자열");
	else
		puts("동일하지 않은 문자열");
	return 0;
} */

/* int main()
{
	char buf[1024];
	char* name = "filename";
	char* extention = ".txt";
	char str[] = "append";

	strcpy(buf, name);
	strcat(buf, extention);
	puts(buf);

	strncat(buf, str, sizeof(str));
	puts(buf);

	return 0;
} */

/* int resultx(int* i)
{
	*i += 5;
	return 4;
}

void main() {
	int k = 2;
	k = k + resultx(&k);
	printf("%d\n", k);
} */