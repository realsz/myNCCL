/*count 10 to 0 */
#include <stdio.h>

int main(void)

{
	int num;
	
	num = 10;
	while ( num >= 0)
	{
		printf("num = %d\n", num);
		num--;
		
	}
	
	return 0;
}

//add sum

#include <stdio.h>

int main(void)

{
        int num,sum;

        num = 10;
        sum = 0;
        while ( num >= 0)
        {
                printf("num = %d\n", num);


                sum =sum +num;

               //printf("sum = %d\n", sum);

                num--;
        }
		
		printf("sum = %d\n", sum);

        return 0;
}


//do-while sum 

#include <stdio.h>

int main(void)

{
	int num,sum;
	
	num = 10;
	sum = 0;
	
	do
	{
		sum = sum + num;
		
		num--;
	
	}
	while ( num <= 0 );
	printf("sum = %d\n", sum);
	
	return 0;
}


