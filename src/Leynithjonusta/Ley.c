#include <stdio.h>

int main()
{
	char mail[1000000], result[1000000];
	int j = 0;

	//scanf("%s", &mail);
	fgets(mail, sizeof(mail), stdin);

	for(int i = 0; mail[i] != '\0'; i++)
	{
		if(mail[i] != ' ')
		{
			//The "j++" is used because the "mail[i]" is in synch with "result[i]" until the "mail" array has a blank space. Than it loses the synch. Hence the different incrementer
			result[j++] = mail[i];
		}	
	}

	//The last position of "result" shall be the "null" character
	result[j] = '\0';

	printf("%s", result);

	return 0;
}