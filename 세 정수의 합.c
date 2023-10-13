#include <stdio.h>
int main()
{
	int result;
	int a, b, c;
	
	printf("세개의 정수 입력: ");
	scanf("%d %d %d", &a, &b, &c);
	
	result = a+b+c;
	
	printf("%d + %d + %d = %d \n", a, b, c, result); 
	 
	return 0;
}
