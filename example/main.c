#include <stdio.h>
#include <fortune.h>

int main(int args, char *argv[])
{
	fortune_t *fortune = rand_fortune();

	printf("\"%s\"\n\t-- %s\n",
		fortune->quote,
		fortune->author
	);

	return 0;
}
