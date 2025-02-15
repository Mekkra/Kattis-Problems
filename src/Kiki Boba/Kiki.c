#include <stdio.h>

int main()
{
	char name[100] = {0};
	int b = 0, k = 0;
	scanf("%s", &name);

	for(int i = 0; name[i] != '\0'; i++)
	{
		if(name[i] == 'b')
		{
			b++;
		}
		else if(name[i] == 'k')
		{
			k++;
		}
	}

	if(b>k)
	{
		printf("boba");
	}
	else if(k>b)
	{
		printf("kiki");
	}
	else if((k==b) && ((k!=0) || (b!=0)))
	{
		printf("boki");
	}
	else printf("none");
	
	return 0;
}