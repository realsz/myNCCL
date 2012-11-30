--------About Homework---------- 
------
------
# Unit One
Unit 1 �ǡ��¸���C���ԡ�ϵ�пγ̵ĵ�һ���֣�����24��Lesson����������4����ε�ѧϰ���ݣ�
1. Beginning Lessons (Lesson 1-7)  
    �Ա���Ϊ���ģ�����ѭ������������֧������C����Ļ����ṹ��
2. Intermediate Lessons (Lesson 8-14)  
    ������Ϊ���ģ������������ݽṹ(�ַ������ṹ�壬����)������C����ĺ�����ơ�
3. Advanced Lessons (Lesson 15-21)  
    ��ָ��Ϊ���ģ���϶�ά���飬λ�����ͺ���ָ�룬����C�����״̬�����˼�롣
4. Homework Projects (Lesson 22-24)  
    ������Ϊ���ģ�ͨ��Ȥζ�⣬�ۺ�ʹ��ѧϰ����֪ʶ�ͼ��ܣ�ʵ����Ŀ�����ܡ�
	
# Beginning Lessons

## Lesson 1 [What is a simplest C program?](Lesson-1.md) ��򵥵�C����
### ���������
* C ���� Language
	- �߼����� High-level Programming Language
	- ������� Assembly Language
	- ����ָ�� Instructions
* ������ Compiler
	- ����� Assembler	
* ����ϵͳ OS
	- ������ Loader
	- ���ص�ַ��ִ�е�ַ Load_Addr & Exec_Addr	
* �����ִ�� Program Execution
	- ���̵ĸ��� Process 
	- ִ������ Execution Sequence

## Lesson 2 [Let's say hello to world](Lesson-2.md) ��ӡ���
### ���������
* �⺯�� Library
	- libc & glibc
	- ϵͳ���� System Call
	- ���װ��ϵͳ����
* ������ Linker
	- ���ӽű� Link Script
	- ������� Entry
	- ���ӽű������˳����ִ�е�ַ 
* ����ı������ Program compiling procedure
	- Ԥ���� Preprocessing  
		cpp (.c -> .i)
	- ���� Compilation  
		cc1 (.i -> .s)
	- ��� Assembly  
		as (.s -> .o)
	- ���� Linking  
		collect2 (.o -> .elf)
* ����Ľṹ Program Structure
	- ����� .text 
	- ���ݶ� .data		
* �����ַ Vitual Memory Address
	- ���̶����ĵ�ַ�ռ� 
	- �ڴ����Ԫ MMU 

## Lesson 3 [Count how many fingers do you have?](Lesson-3.md) ѭ����ӡ
### ���������
* while ѭ�� �� do-while �÷�
	- �ȽϺ���תָ�� Compare and Jump Instruction
	- do-while �� while ��ʱ������
* �����ĳ�ʼ�� Variable Initialization
	- �����Ĵ洢���� Data & BSS Section
	- ������ȡ���淶 Naming
* �����ת Relative Jump 
	- λ���޹ش��� PIC (Position Independent Code)

## Lesson 4 [Judge a number odd or even](Lesson-4.md) �ж���ż
### ���������
* ������֧ Condition 
	- ���ʽ��ֵ  Expression Value
* ������ Coding Style
	- ��ʶ������ symbol naming
	- �������� (�����֪���Լ�����ʲô��������㹻��)
* �����Ĵ�ֵ�ʹ�ַ Parameter's value and address
	- ��������ƽӿڹ淶 ABI (Application Binary Interface)

## Lesson 5 [Summarize all numbers from 1 to 100](Lesson-5.md) ��1�ӵ�100���
### ���������
* for ѭ�� 
	- ����ѭ���÷��Ƚ�
* �Զ����� auto variable
	- C ���Եķ�չ��Ǩ Old Style C/C89/C99/GNU C	
* Ԥ������� Pre-compile 
	- ��������
	- # �� ## ���÷�
* DEBUG ���Ժ�
	- \_\_func\_\_, \_\_FUNCTION\_\_
	- \_\_LINE\_\_ 	
	- args... �� ##args ���÷�
		
## Lesson 6 [Print 9*9 multiplication table](Lesson-6.md) �˷���
### ���������
* ѭ��Ƕ��
	- ����ѭ���ĵ����÷�
* ����ĵ���
	- ����ʱ������ʱ����
* ����ջ Function Stack
	- ջ֡ Stack Frame
		
## Lesson 7 [Find a max prime number within 100](Lesson-7.md) ��100���ڵ��������
### ���������
* ѭ���е�������֧ 
	- break �� goto �÷�	
* ��ѧ�⺯�� math library
	- ��̬���ӺͶ�̬���� static & dynamic linkage
* �㷨Ч�� 
	- �㷨��ʱ�临�Ӷȷ��� O(n) 
* �ṹ�������
	- ���ֻ������ƽṹ�Ϳ���д���ֳ���

# Intermediate Lessons
## Lesson 8 [Find how many 9 in number 1 to 100](Lesson-8.md) 1��100�ж��ٸ�9
### ���������
* ���� Function
	- ��������ںͳ���
* �ֽ�ͷֲ� stratify 
	- С������
* ���̳���ͽӿ���� Procedure Abstract
	- �ɸ��õĴ��� Reuse
	- �ӿ�С�ɡ���������
		
## Lesson 9 [Convert a number to a string](Lesson-9.md) ����ת�ַ���
### ���������
* �ַ����� String and Character Array
	- �ַ����� ASCII ���
* �ַ������� String Reverse 
	- ����ʽ�궨�� Function-like Macro
	
## Lesson 10 [Josephus ring](Lesson-10.md) Լɪ��
### ���������
* �������� Array	
	- ����ĳ�ʼ��
* ���ݽṹ���㷨 DS & AL
	- ����������� Data-Driven
	- ����ѹ��һ�У���̵ĺ��������ݽṹ���������㷨
* ����˼�� Link List
	- �㷨�Ż� Optimization

## Lesson 11 [Calculate the distance between 2 point](Lesson-11.md) �����������֮��ľ���
### ���������
* �ṹ�� Struct
	- �ṹ���ʼ��
* ����ͽṹ��
	- �����������Ĵ�ַ����
	- �ṹ������Ĵ�ֵ����
* �������� typedef 
	- Ԥ����ͱ���ʱ Pre-compile & Compiling time
* C99 �нṹ�����չ�÷�
	- �����ں�ģ���д	
	
## Lesson 12 [Does your machine use little-endian?](Lesson-12.md) �жϻ����洢�Ƿ�Сβ��
### ���������
* ���� Union
	- �洢����
* �ṹ��ն� Struct Hole
	- �������� Alignment & Padding
* ���ݵĴ洢��ʾ Complements
	- ԭ�룬����Ͳ���

## Lesson 13 [Sorry, your car is restricted today](Lesson-13.md) �Բ�����ĳ���������
### ���������
* ��֧��� Switch
* ö���÷� enum
	- ö�����͵ĳ�ʼ��
* ����ʽ���� Incremental Development
	- ����ΪӪ������һ�����
* Ԥ�������÷�	
	- \_\_DATE\_\_ 
	- \_\_TIME\_\_
	
## Lesson 14 [Is there a way out?](Lesson-14.md) �жϵ�ͼ��ĳ���Ƿ��г�·
### ���������
* ��ά����
	- ѭ���ͷ�֧
* �߼����ʽ Logical Expression
	- �� ||
	- �� &&	
* ��������� Random
	- ʱ������ Time seed
	

# Advanced Lessons

## Lesson 15 [Count bit 1 in a number](Lesson-15.md) ͳ��һ���������Ʊ�ʾ��1�ĸ���
### ���������
* λ����
	- ��λ >>
	- �� &
* ��������
	- ��λ�ӷ�	
* �㷨Ч��
	- �����Ż������֮Դ
	- �������У�������ȷ��������
* λ�����
	- ͨ��λ��ʵ��λ����
	- Ƕ��ʽ����еļĴ�������

## Lesson 16 [How to strcpy](Lesson-16.md) �ַ�������
### ���������
* ָ��
	- ������洢��ϵ
* ��̬�ڴ���� Memory Allocate	
	- heap & stack	
* assert ��
	- ��Ԫ���ʽ
* Ѱַ�ͷô�
	- �ڴ����
	- ��ֹ�������Ż� volatile
	
## Lesson 17 [Find how many words in an artitle](Lesson-17.md) ͳ�Ƶ��ʸ���
### ���������
* ָ������
	- �Ͷ�ά����ıȽ�
* ��̬�ڴ����
	- malloc & free
* �ݹ� Recursive 
	- ѭ���͵ݹ� 	
* �����������ں�������
	- static �÷�
* ״̬��˼��ļ�Ӧ��
	- state machine

## Lesson 18 [My printf](Lesson-18.md) ʵ�� printf
### ���������
* �ַ�ָ������	
* �ɱ䳤�Ȳ����ĺ���ʵ��
	- �ַ������� const char *
	- ... �ɱ�������÷�
* ջ֡��Ӧ��
	- va_list 
	- va_start
	- va_arg
	- va_end

## Lesson 19 [Shell command parser](Lesson-19.md) ���������
### ���������
* ����ָ��
	- �ص����� Call-Back Function
* main ���� argc, argv
	- �ַ�ָ������ vs ָ���ָ��
* ���̵Ļ�������
	- ����ջ�ռ䲼��

## Lesson 20 [Rectangular and Polar](Lesson-20.md) ֱ������ͼ����껥��
### ���������
* ����ָ������
* ������������
	- typedef ����������Ĵ������
* �������ģ��
	- ����ָ��ṹ��
* �������ı��
	- �����Cʵ��OOP
	- ������ƵĻ���ԭ��: �����, ���ھ� (Low Coupling, High Cohesion) 

## Lesson 21 [Is this number a float?](Lesson-21.md) �������б�
### ���������
* ��ά���� 
	- ��ά��������
	- ��ά����ָ������
* FSM ����״̬��
	- ״̬�����ģ��
	- ״̬�������
* ���Ժͻ��Ʒ���
	- ���ھ۵����ԭ��
* Unix �������֮��ʾԭ��
	- ��֪ʶ�������������߼����Ӷ���׳��


# Homework Projects
	
**The next 3 lessons are projects you should do it by yourself.**

## Lesson 22 Guess what number in my hand ������Ϸ
### ��������
������Ϸ�������������4λ����Ȼ���û�����4λ�������Ը�������?A?B���������³����Ե�4λ���Ƕ��٣�	
(4λ���ֻ����ظ���A��ʾλ�ú����ֶ��ԣ�B��ʾλ�ò��ԣ����ֶ�)


## Lesson 23 Five-Chess game ������
### ��������
�����壺��һ��9x9��������ͨ�����˶��ĵ���ʽ�������������Ϸ���������ɫ�����ӣ���һ��������������γ�һ��ֱ�ߣ������ᡢ�����Խ���3�����򣩣���Ϊ��ʤ��
(ʵ��һ������������㷨�������ͬ���Ա�޷�ʤ����������Ӯ)


## Lesson 24 Build a simple Search Engenine ����������
### ��������
���������棺����ҳ�ļ���ץȡ�����ı� (���� "\<p\>hello, lumit.\</p\>" )���������Ƿ�����û�����Ĺؼ��� lumit����������ض������ġ�
����ҳ�ļ���ץȡ������URL (���� "\<a href="http://www.lumit.org">lumit - let us make it together.\</a\>" )


