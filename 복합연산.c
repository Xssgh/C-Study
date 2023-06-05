#include <stdio.h>
int main()
{
	int a, b, c;
	int result;
	
	scanf("%d %d %d", &a, &b, &c);
	
	result = (a-b)*(b+c)*(c%a);
	
	printf("%d\n", result);
	
	
	 
	return 0;
}
