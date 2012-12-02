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