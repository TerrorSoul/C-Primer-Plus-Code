#include <stdio.h>
#include <string.h>

int main(void) {
	printf_s(" ‰»Î√˚◊÷£∫");
	char name[10];
	scanf_s("%s", name, 9);

	printf_s("a£∫\"%s\"\n", name);
	printf_s("b£∫\"%20s\"\n", name);
	printf_s("c£∫\"%-20s\"\n", name);
	printf_s("d£∫\"%*s\"\n", strlen(name) + 3, name);

	getchar();
	getchar();
	return 0;
}