/*guess the No. */
#include <stdio.h>

int main(void)

{
	int A,B;
	
	printf("Input the A number:");
	scanf("%d",&A);
	//printf("A number is %d", A );
	
	printf("Input the B number:");
	scanf("%d",&B);
	
	//printf("B number is %d", B );
	
	while ( A != B)   //judge a&b and loop
	{
		if ( A > B)
		{
			printf("B %d less than A,pls input again:", B);
			scanf("%d",&B);
		}
		else{
			printf("B %d more than A,pls input again:", B);
			scanf("%d",&B);
		}
	
	} 
	
	printf("Oh,Yeah,U get it B %d\n", B);
		
	return 0;
}