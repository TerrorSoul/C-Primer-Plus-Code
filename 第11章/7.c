#include <stdio.h>
#include <string.h>

void mystrncpy(char*, const char*, size_t);

int main(void) {
	char target[20];
	char source[10];
	
	fgets(target, 20, stdin);
	fgets(source, 10, stdin);
	mystrncpy(target, source, 20 - strlen(target));
	printf_s("%s", target);

	getchar();
	return 0;
}

void mystrncpy(char *target, const char *source, size_t length)
{
	size_t t = strlen(target);
	for (size_t i = 0; i < length; i++)
	{
		target[i + t - 1] = source[i];
	}
}