#include <stdio.h>
#include <string.h>

int main(void) {
	char word[10];
	printf_s("输入一个单词：");
	scanf_s("%s", word, 9);
	
	for (int i = strlen(word) - 1; i >= 0; i--)
	{
		printf_s("%c", word[i]);
	}
	
	getchar();
	getchar();
	return 0;
}