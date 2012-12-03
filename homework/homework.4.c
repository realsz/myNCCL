/*guess the No. */
#include <stdio.h>

int main(void)

{
	int num_a,num_b;
	
	printf("Input the num_a number:");
	scanf("%d",&num_a);
	//printf("num_a number is %d", num_a );
	
	printf("Input the num_b number:");
	scanf("%d",&num_b);
	
	//printf("num_b number is %d", num_b );
	
	while ( num_a != num_b)   //judge a&b and loop
	{
		if ( num_a > num_b)
		{
			printf("num_b %d less than num_a,pls input again:", num_b);
			scanf("%d",&num_b);
		}
		else{
			printf("num_b %d more than num_a,pls input again:", num_b);
			scanf("%d",&num_b);
		}
	
	} 
	
	printf("Oh,Yeah,U get it num_b %d\n", num_b);
		
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