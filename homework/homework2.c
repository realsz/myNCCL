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


     printf("global is %d\n", (int)&global );

     printf("global is %d\n", (int)(&global + 1));

     printf("data segment end at %p\n", edata);

     return 0;
 }
 
 /*
 shangz@shangz-ME051:/tftpboot$ ./a.out 
hello, everyone!
__executable_start= 0x8048000
_start = 0x8048360
main = 0x8048414
text segment end at 0x80485a6

global at 0x804a018
global is 134520856
global is 134520860
data segment end at 0x804a01c
 */
 
 // ----------------------- char--------------
 
 #include <stdio.h>

 extern char __executable_start;
 extern char _start;

 extern char etext[];
 extern char edata[];

 char global = 100;

 int main(void)
 {
     printf("hello, everyone!\n");

     printf("__executable_start= %p\n", &__executable_start);
     printf("_start = %p\n", &_start);
     printf("main = %p\n", main);
     printf("text segment end at %p\n\n", etext);

     printf("global at %p\n", &global);


     printf("global is %d\n", (int)&global );

     printf("global is %d\n", (int)(&global + 1));

     printf("data segment end at %p\n", edata);

     return 0;
 }
 
 /*
 shangz@shangz-ME051:/tftpboot$ ./a.out 
hello, everyone!
__executable_start= 0x8048000
_start = 0x8048360
main = 0x8048414
text segment end at 0x80485a6

global at 0x804a018
global is 134520856
global is 134520857
data segment end at 0x804a01c
 */
 
 
 //---------------------float-------------------
 
 #include <stdio.h>

 extern short __executable_start;
 extern short _start;

 extern short etext[];
 extern short edata[];

 short global = 100;

 int main(void)
 {
     printf("hello, everyone!\n");

     printf("__executable_start= %p\n", &__executable_start);
     printf("_start = %p\n", &_start);
     printf("main = %p\n", main);
     printf("text segment end at %p\n\n", etext);

     printf("global at %p\n", &global);


     printf("global is %d\n", (int)&global );

     printf("global is %d\n", (int)(&global + 1));

     printf("data segment end at %p\n", edata);

     return 0;
 }
 
 /*
 shangz@shangz-ME051:/tftpboot$ ./a.out 
hello, everyone!
__executable_start= 0x8048000
_start = 0x8048360
main = 0x8048414
text segment end at 0x80485a6

global at 0x804a018
global is 134520856
global is 134520858
data segment end at 0x804a01c
 */
 
 //------------------float---------------
 #include <stdio.h>

 extern float __executable_start;
 extern float _start;

 extern float etext[];
 extern float edata[];

 float global = 100;

 int main(void)
 {
     printf("hello, everyone!\n");

     printf("__executable_start= %p\n", &__executable_start);
     printf("_start = %p\n", &_start);
     printf("main = %p\n", main);
     printf("text segment end at %p\n\n", etext);

     printf("global at %p\n", &global);


     printf("global is %d\n", (int)&global );

     printf("global is %d\n", (int)(&global + 1));

     printf("data segment end at %p\n", edata);

     return 0;
 }

 
 
 
 /*
 shangz@shangz-ME051:/tftpboot$ ./a.out 
hello, everyone!
__executable_start= 0x8048000
_start = 0x8048360
main = 0x8048414
text segment end at 0x80485a6

global at 0x804a018
global is 134520856
global is 134520860
data segment end at 0x804a01c
 */