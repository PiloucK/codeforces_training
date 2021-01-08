#include <stdlib.h>
#include <stdio.h>

int main()
{
	char s[1024];

	scanf("%s", s);
	int i = atoi(s);
	if (i < 4 || i % 2 != 0)
	{
		printf("NO");
		return 0;
	}
	i -= 2;
	if (i % 2 != 0)
	{
		printf("NO");
		return 0;
	}
	printf("YES");
	return 0;
}
