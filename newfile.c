#include <stdio.h>
int add(int , int);

int main()
{
	int a = 0, b = 0;
	printf("This is first line of code in git repository\n");
	printf("This line of code is from git web\n");
	printf("Enter 2 numbers to be added: ");
	scanf("%d%d",&a,&b);
	printf("The sum of 2 numbers is : %d\n", add(a, b));
	return 0;
}
int add(int a , int b)
{
	return a+b;
}
