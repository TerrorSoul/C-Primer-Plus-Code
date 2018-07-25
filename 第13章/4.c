#include <stdio.h>

int main() {
	FILE *fp;
	char line[50];
	int argc = 3;
	char *argv[] = { "1", "text.txt", "text1.txt" };

	for (size_t i = 1; i < argc; i++)
	{
		fopen_s(&fp, argv[i], "r");
		while (fgets(line, 50, fp) != NULL) {
			fputs(line, stdout);
		}
		fputs("\n", stdout);
		fclose(fp);
	}

	getchar();
	return 0;
}