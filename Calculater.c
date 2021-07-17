#include<stdio.h>
#include<math.h>
int main()
{
	int n ;
	float a,b;
	printf("Enter two numbers :");
	scanf("%f%f",&a,&b);
	printf("press 1 for addition, press 2 for substraction,\n ");
	printf("press 3 for multiplications, press 4 for division\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		{
			printf("sum = %f\n", a+b );
		    break ;
		}
		case 2:
		{
			printf("sub = %f\n", a-b);
			break ;
		}
		case 3:
		{
			printf("mul =%f\n", a*b);
			break;
		}
		case 4:
		{
		    printf("div = %f\n", a/b);
		    break;
		}
		default :
		{
			printf("INVALID NUMBER :");
		}
	}
	 return 0;
}