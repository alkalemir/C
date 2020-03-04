#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *names = NULL;
	char name[64];
	int count, len;

	count = 1;
	
	for (;;) {
		printf("Isim giriniz:");
		gets(name);
		if (!strcmp(name, "exit"))
			break;
		if (count != 1)
			strcat(names, ", ");
		len = strlen(name) + 2;
		names = (char *)realloc(names, count + len);
		if (names == NULL) {
			printf("cannot allocate memory!\n");
			exit(EXIT_FAILURE);
		}
		if (count == 1)
			*names = '\0';
		count += len;

		strcat(names, name);
	}

	puts(names);

	return 0;
}
