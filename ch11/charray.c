#include <stdio.h>

int main(void) {
	//문자 선언과 출력
	char ch = 'A';
	printf("%c %d\n", ch, ch);

	//문자열 선언 방법1
	char java[] = { 'J','A','V','A','\0' };
	printf("%s\n", java);
	//문자열 선언 방법2
	char c[] = "C language";
	printf("%s\n", c);
	//문자열 선언 방법3
	char csharp[5] = "C#";
	printf("%s\n", csharp);

	printf("%c%c\n", csharp[0], csharp[1]);

	return 0;
}