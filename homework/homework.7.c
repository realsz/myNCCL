/*------------------------7.1------------------------------------*/
/*input two different addr and */

#include <stdio.h>

#define PRINT(x)    printf("--> %s--line-%d-- "#x" is %d\n",__FUNCTION__,__LINE__,x)
//#define PRINT(x)

int main(void)

{
	int i, j;
	int input_a, input_b,input_c,input_d;
	int num_a;
	
	num_a = 0;

	printf("\n");
	
	do
	{ 
		for(i = 0; i < 5; i++)	
		{
			
			for(j = 0; j < 5; j++)
			{
				if( (input_a == i && input_b == j)||(input_c == i && input_d == j) )
				{	
					if(input_c >= input_a)
					{
						num_a = (input_c - input_a) * 5 + (input_d - input_b - 1);
						if(input_c == input_a && input_d == input_b)
							num_a = 0;
					}
					else
					{
						num_a = (4 - input_a + input_c) * 5 + (4 - input_b + input_d);
					}
					printf("1\t");
				} 
				else			
					printf("0\t");
			}
		
		printf("\n\n\n\n\n");
		}
		
		if( input_a > i || input_b > i ||input_c > i || input_d > i )
			printf("first running~!\n\n");
		else	
			printf("the coordinate number A£¨%d, %d£©between B(%d, %d) is %d \n ",input_a, input_b, input_c, input_d, num_a);		

		//input input_a	
		do
		{
			printf("Pls input the input_a number:(less than 5)\n");
			scanf("%d", &input_a);
		}
		while(input_a >= 5);

		printf("Yeah~! U input the right number input_a %d!!\n\n", input_a);

		//input input_b	
		do
		{
			printf("Pls input the input_b number:(less than 5)\n");
			scanf("%d", &input_b);
		}
		while(input_b >= 5);

		printf("Yeah~! U input the right number input_b %d!!\n\n", input_b);
	
		printf("the coordinate A number input_a and input_b is(%d,%d)\n\n", input_a, input_b);
		
	//input input_c	
		do
		{
			printf("Pls input the input_c number:(less than 5)\n");
			scanf("%d", &input_c);
		}
		while(input_c >= 5);

		printf("Yeah~! U input the right number input_c %d!!\n\n", input_a);

		//input input_d	
		do
		{
			printf("Pls input the input_d number:(less than 5)\n");
			scanf("%d", &input_d);
		}
		while(input_d >= 5);

		printf("Yeah~! U input the right number input_d %d!!\n\n", input_b);
				
		printf("the coordinate B number input_c and input_d is(%d,%d)\n\n", input_c, input_d);
	
	} while ( 1 );

	return 0;
}

/*------------------------7.2------------------------------------*/



