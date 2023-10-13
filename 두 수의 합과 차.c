#include <stdio.h>

int main()
{
	int a, b, c;
	int result;
	
	printf("세 정수를 입력 : ");
	
	scanf("%d %d %d", &a, &b, &c);
	
	result = a*b+c;
	
	printf("%d\n", result);
	 
	
	return 0;
 } 
