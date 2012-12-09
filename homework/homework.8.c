
/*------------8.1.c------------------*/
/*
 * main.c - find the max prime  in 100
 *
 * Copyright (C)  shangz <shang115@sina.cn>
 * 
 */
#include <stdio.h>
#include <math.h>

#define PRINT(x)    printf("--> %s--line-%d-- "#x" is %d\n",__FUNCTION__,__LINE__,x)
//#define PRINT(x)

/*
 * max_prime - calculate the max prime in num
 * @num:    the number we want to find
 * @digit:  the digit we search in num
 *
 * Return value:  The max prime in this nums
 *
 */
int max_prime(int num)
{
    int i, j;
	int max_u = 1;    /* the result of the max in num */
	
    for(i = 1; i <= num; i++)
	{
        int tmp;
		tmp = (int)sqrt(i);
		
        for(j = 2; j <= tmp; j++)
        {
			if (i % j == 0)
				break;
		}
		
		if(j == tmp + 1)
			max_u = i;
//		PRINT(max);	
    } 

    return max_u;
}

int main(void)
{
 
    int num_in; 
	num_in = 100;        /* the number U have*/

	int max_num = 0;
	
    /* calculate the max prime in num */

	max_num = max_prime(num_in);
	
    printf("max prime num is  = %d \n", max_num);

    return 0;
}

/*------------8.2.c------------------*/
/*
 * main.c - find the same num at the same place
 *
 * Copyright (C)  shangz <shang115@sina.cn>
 * 
 */
#include <stdio.h>

#define PRINT(x)    printf("--> %s--line-%d-- "#x" is %d\n",__FUNCTION__,__LINE__,x)
//#define PRINT(x)

/*
 * num_place - find the same num at the same place
 * @num:    the number we want to find
 * @digit:  the digit we search in num
 *
 * Return num_same:  The same number and place in this nums
 *
 */
 int num_place(int num_a, int num_b)
 {
//	int i, j;  
//	int num_tmp_a, num_tmp_b; 
	int num_same;
	
	num_same = 0;
	
	do{
		if((num_a % 10) == (num_b % 10))
			num_same++;
		
		num_a = num_a / 10;
		num_b = num_b / 10;
	
	} while(num_a != 0 || num_b != 0);
	
	return num_same;
 }

 int main(void)
 
 {
	int input_a, input_b;
	int same;
	same = 0;
	
	printf("Pls,input the num input_a\n");
	scanf("%d", &input_a);
	
	printf("Pls,input the num input_b\n");
	scanf("%d", &input_b);
	
	printf("U have input the num input_a and input_b is: %d , %d \n", input_a, input_b );
	
	same = num_place(input_a, input_b);
	
	printf("The same num U have input is %d\n", same);
	
	return 0;	
 }