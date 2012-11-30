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

/*use rand() function guess again*/
/*use this rand() fail , google this url http://www.cnblogs.com/ngnetboy/archive/2012/11/23/2784078.html*/

#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	int num_a,num_b;
	
	num_a = rand();
	
	printf("num_a is %d\n", num_a);
	
	printf("Input the num_b number:");
	scanf("%d",&num_b);
	
	while ( num_a != num_b)
	{
		if ( num_a > num_b)
		{
			printf("num_b %d is less than num_a,pls input again", num_b);
			scanf("%d", &num_b);
		}
		else{
			printf("num_b %d is more than num_a,pls input again", num_b);
			scanf("%d", &num_b);
		
		}
			
	}
	
	return 0;
}