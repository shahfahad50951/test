#include <stdio.h>
int main(int argc, char *argv[])
{
	while(argc > 1)
	{
		printf("Hello %s\n", argv[argc-1]);
		--argc;
	}
	return 0;
}
