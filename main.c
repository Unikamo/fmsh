#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	while (1==1)
	{
		char input;
		scanf("> ", &input);
		system(&input);
		input = '\0';
	}
}
