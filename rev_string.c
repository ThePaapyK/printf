#include "main.h"

void rev_string(char *s)
{
	int len1 = 0;
	int len2 = 0;
	char tmp;

	while (s[len1] != '\0')
	{
		len1++;
	}

	while (len2 <= len1)
	{
		tmp = s[len2];
		s[len2] = s[len1];
		s[len1] = tmp;
		len2++;
		len1--;
	}
}
