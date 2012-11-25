/*the lesson1 homework by shangz*/

//******--00--****************************************
//error templet

#include <stdio.h>
int main(void)
{
		
	return 0;  
}

/*erro msg ideone: 
xxxxxxxxxxxxxxxxx
*/

//******--01--****************************************
//error with write wrong return. what a such poor english

#include <stdio.h>
int main(void)
{
	printf("Hello world~!");
	
	retutrn 0;  //write the bad return 
}

/*erro msg ideone 
prog.c: In function ¡®main¡¯:
prog.c:6: error: ¡®retutrn¡¯ undeclared (first use in this function)
prog.c:6: error: (Each undeclared identifier is reported only once
prog.c:6: error: for each function it appears in.)
prog.c:6: error: expected ¡®;¡¯ before numeric constant*/
 
//******--02--****************************************
 
//wrong Input method with Semicolon
 
 int global = 1;
 
 int main(void)
 {
     int local = 2;
     int global = 3£»
        
        //we return these two varible' summary
        return local + global;
 }
 
/*erro msg ideone:http://ideone.com/DBLqV9 
prog.c: In function ¡®main¡¯:
prog.c:8: error: stray ¡®\357¡¯ in program
prog.c:8: error: stray ¡®\274¡¯ in program
prog.c:8: error: stray ¡®\233¡¯ in program
prog.c:11: error: expected ¡®,¡¯ or ¡®;¡¯ before ¡®return¡¯
prog.c:8: warning: unused variable ¡®global¡¯
prog.c:7: warning: unused variable ¡®local¡¯
 */
   
//******--03--****************************************

// wrong global with glocal /*copy code and modified not complete*/

  int global_1 = 1;
  int global_2 = 2;
  int global_3 = 3;
  
  int main(void)
  {
     printf("glocal_1 = %p\n", &glocal_1);
     printf("glocal_2 = %p\n", &glocal_2);
        printf("glocal_3 = %p\n", &glocal_3);
        
         int local_1 = 4;
         int local_2 = 5;
         int local_3 = 6;
         
         printf("local_1 = %p\n", &local_1);
         printf("local_2 = %p\n", &local_2);
         printf("local_3 = %p\n", &local_3);
         
         int global_1 = 7;
         int global_2 = 8;
         int global_3 = 9;
         
         printf("global_1 = %p\n", &global_1);
         printf("global_2 = %p\n", &global_2);
         printf("global_3 = %p\n", &global_3);
         
     
         return 0;
  }
/*   Erro msg ideone:http://ideone.com/HqRN33
prog.c: In function ¡®main¡¯:
prog.c:9: warning: implicit declaration of function ¡®printf¡¯
prog.c:9: warning: incompatible implicit declaration of built-in function ¡®printf¡¯
prog.c:9: error: ¡®glocal_1¡¯ undeclared (first use in this function)
prog.c:9: error: (Each undeclared identifier is reported only once
prog.c:9: error: for each function it appears in.)
prog.c:10: error: ¡®glocal_2¡¯ undeclared (first use in this function)
prog.c:11: error: ¡®glocal_3¡¯ undeclared (first use in this function)
*/

//******--04--****************************************
//error  return diff type

#include <stdio.h>
int main(int)
{
		
	return 0;  
}

/*erro msg ideone: http://ideone.com/XrTpWZ
prog.c:1: warning: ¡®main¡¯ takes only zero or two arguments
prog.c: In function ¡®main¡¯:
prog.c:1: error: parameter name omitted
*/

//******--05--****************************************
//error  without Semicolon

#include <stdio.h>
int main(void)
{
		
	return 0  
}

/*erro msg ideone: http://ideone.com/H8VLeY
prog.c: In function ¡®main¡¯:
prog.c:5: error: expected ¡®;¡¯ before ¡®}¡¯ token
*/

//******--06--****************************************
//error  return diff type

#include <stdio.h>
 int main(void)
 {
    int a = 1;
    int b = 2;
         
    if a > b
        printf ("a more than b\n");
    else
        printf("b more than a\n");
 	return 0;  
 }

/*erro msg ideone: http://ideone.com/8gCSvz
prog.c: In function ¡®main¡¯:
prog.c:6: error: expected ¡®(¡¯ before ¡®a¡¯
prog.c:6: warning: statement with no effect
prog.c:9: warning: implicit declaration of function ¡®printf¡¯
prog.c:9: warning: incompatible implicit declaration of built-in function ¡®printf¡¯
prog.c:4: warning: unused variable ¡®b¡¯
*/