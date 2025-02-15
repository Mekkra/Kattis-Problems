#include <stdio.h>

int main()
{
	int n=0, input[200000] = {0}, temp = 0;

	scanf("%d", &n);

	for(int i = 0; i<n; i++)
	{
		scanf("%d", &input[i]);
	} 

	for(int i = 0; i<n/2; i++)
	{
		temp = input[i];
		input[i] = input[n-i-1];
		input[n-i-1] = temp;
	} 

	for(int i = 0; i<n; i++)
	{
		printf("%d\n", input[i]);
	} 

	return 0;
}