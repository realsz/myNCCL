/*print the average number */
#include <stdio.h>

#define PRINT(x)    printf("--> %s--line-%d-- "#x" is %d\n",__FUNCTION__,__LINE__,x)

//#define PRINT(x)

int main(void)

{
    int i;
    int num,total;
    int average;

    total = 0;

    for( i = 0; i < 5; i++) 
    {

        printf("Pls,input the num %d:\n" ,i + 1);

        scanf("%d",&num);

        total = total + num;    

        PRINT(total);           
	}

    average = total / 5;

    printf("average is %d\n", average);

    return 0;

}

/*find the max number*/

#include <stdio.h>

#define PRINT(x)   printf("--> %s--line-%d-- "#x" is %d\n",__FUNCTION__,__LINE__,x)
//#define PRINT(x)
int main(void)

{
	int i;
	int temp_num,num_i;
	int max_num;
	
	max_num=temp_num=num_i = 0;
	
	for(i = 0; i < 5; i++)
	{
	
		temp_num = num_i;
		
		
		printf("Pls input the num_i %d times\n", i + 1);
		scanf("%d",&num_i);	
		
		
		
		PRINT(num_i);
		PRINT(temp_num);
	
		
		if ( temp_num >= num_i)		
			max_num = temp_num;
		else
		{	
			max_num = num_i;
		}	
		
		PRINT(max_num);	
	}
	
	printf("the max num is %d\n", max_num);
	
	return 0;
}


