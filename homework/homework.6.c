/* 5*5 Chessboard */

#include <stdio.h>

#define PRINT(x)    printf("--> %s--line-%d-- "#x" is %d\n",__FUNCTION__,__LINE__,x)
//#define PRINT(x)

int main(void)

{
	int i, j;
	int input_a, input_b;
	
	printf("\n");
	
	for(i = 0; i < 5; i++)	
	{

		for(j = 0; j < 5; j++)
		{
			printf("0\t");
		}
		
		printf("\n\n\n\n\n");
	}
	
	printf("--------------------------------------\n");

//input input_a	
	do
	{
	printf("Pls input the input_a number:(less than 5)\n");
	scanf("%d", &input_a);
	}
	while(input_a >= 5);
	
	printf("Yeah~! U input the right number input_a %d!!\n", input_a);

//input input_b	
	do
	{
	printf("Pls input the input_b number:(less than 5)\n");
	scanf("%d", &input_b);
	}
	while(input_b >= 5);
	
	printf("Yeah~! U input the right number input_a %d!!\n", input_b);
	
//the new input number	
	printf("\n");
	
	for(i = 0; i < 5 - input_a; i++)	
	{

		for(j = 0; j < 5 - input_b; j++)
		{
			printf("1\t");
		}
		
		printf("\n\n\n\n\n");
	}
	
	printf("--------------------------------------\n");
	
	
	return 0;
}


/*Perfect number*/

#include <stdio.h>

#define PRINT(x)    printf("--> %s--line-%d-- "#x" is %d\n",__FUNCTION__,__LINE__,x)
//#define PRINT(x)

int main(void)
{
	int i,j;
	int sum;
	
	
	
	for(i = 2; i < 1000; i++ )
	{
		sum = 0;
		
		for(j = 1 ; j <= i / 2; j++)
		{
			if(i % j == 0)
			
			sum += j;
			
//			printf("sum is %d\n", sum);
//			printf("j is %d \n", j);
		}
		
		if (sum == i)
			printf("i %d =  is Perfectnumber\n", i);
	}	
	
	return 0;
}


/*printf Daffodils*/

#include <stdio.h>

#define PRINT(x)    printf("--> %s--line-%d-- "#x" is %d\n",__FUNCTION__,__LINE__,x)
//#define PRINT(x)

int main(void)
{
	int i;
		
	int ones,tens,hundr;
	
	for(i = 100; i < 1000; i++)
	{
		hundr = i / 100;
		tens = (i / 10) - hundr * 10;
		ones = i % 10;
		
		
		
		if(ones * ones * ones + tens * tens * tens + hundr * hundr * hundr == i)
		
		printf("i %d is Daffodils number\n", i);
		
	}
	
	return 0;
}


