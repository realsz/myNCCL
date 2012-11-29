/*the lesson2 homework by shangz*/

//***************--int--*************************
 
//printf 3 global and local addr
 #include <stdio.h>
 int global_1 = 1;
 int global_2 = 2;
 int global_3 = 3;
 
 int main(void)
 {
    printf("diff by addr \n");
	
    printf("global_1 = %p\n", &global_1);
	printf("global_2 = %p\n", &global_2);
	printf("global_3 = %p\n", &global_3);
	
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
 
 
 // print result
 /*
 input: 無
output:
diff by addr 
global_1 = 0x804a018
global_2 = 0x804a01c
global_3 = 0x804a020
local_1 = 0xbfdb2fc4
local_2 = 0xbfdb2fc0
local_3 = 0xbfdb2fbc
global_1 = 0xbfdb2fb8
global_2 = 0xbfdb2fb4
global_3 = 0xbfdb2fb0
 */
 
 /*     int    conclusion      
1. global variable and local variable have diff addr space
2. global and local variables have same continuous 4 byte
 
 */
 
//***************--char--*************************
 
//printf 3 global and local addr
 #include <stdio.h>
 char global_1 = 1;
 char global_2 = 2;
char global_3 = 3;
 
 int main(void)
 {
    printf("diff by addr \n");
	
    printf("global_1 = %p\n", &global_1);
	printf("global_2 = %p\n", &global_2);
	printf("global_3 = %p\n", &global_3);
	
	 char local_1 = 4;
	 char local_2 = 5;
	 char local_3 = 6;
	 
	 printf("local_1 = %p\n", &local_1);
	 printf("local_2 = %p\n", &local_2);
	 printf("local_3 = %p\n", &local_3);
	 
     char global_1 = 7;
	 char global_2 = 8;
	 char global_3 = 9;
	 
	 printf("global_1 = %p\n", &global_1);
	 printf("global_2 = %p\n", &global_2);
	 printf("global_3 = %p\n", &global_3);
        
    
        return 0;
 }
 
 //printf result
 /*
 input: 無
output:
diff by addr 
global_1 = 0x804a018
global_2 = 0x804a019
global_3 = 0x804a01a
local_1 = 0xbfdfcf47
local_2 = 0xbfdfcf46
local_3 = 0xbfdfcf45
global_1 = 0xbfdfcf44
global_2 = 0xbfdfcf43
global_3 = 0xbfdfcf42
 */
 
  /*     char    conclusion      
1. char have small than int ,just 1byte addr space
 
 */
 
 /*      short   conclusion  
 1.short have 2 byte space 
 */
 
 /*      float   conclusion  
 1.short have 4 byte space 
 */
 
 
 
 //通过强制类型转换，打印一下 &global + 1 的值是多少
 
 
 #include <stdio.h>
 
 extern int __executable_start;
 extern int _start;
 
 extern char etext[];
 extern char edata[];
 
 int global = 100;
 
 int main(void)
 {
     printf("hello, everyone!\n");
 
     printf("__executable_start= %p\n", &__executable_start);
     printf("_start = %p\n", &_start);
     printf("main = %p\n", main);
     printf("text segment end at %p\n\n", etext);
 
     printf("global at %p\n", &global);
     
     printf("global is %d\n", &global + 1);
     
     printf("data segment end at %p\n", edata);
 
     return 0;
 }   