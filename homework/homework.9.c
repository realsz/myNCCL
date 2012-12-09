/* 9.1.c */
 
 int judge(char buf[])
 {
	int i = 0;
	int len = 0;
	char buf_cp[100]; 
	
	for(i = 0;buf[i]!='\0';i++)
	{
		buf_cp[i] = buf[i];
	}
	
	len = i;
	for(i = 0; i < len /2; i++)
	{
		char tmp;
		tmp = buf_cp[i];
		buf_cp[i] = buf_cp[len - i -1];
		buf_cp[len - i -1] = tmp;
		
		if (buf_cp[i] == buf[i])
			return 1;
		else
			return 0;
	}
	
 }
 
 int main(void)
 
 {
	char input_c[100];
	printf("Pls input the char input_c\n");
	scanf("%s",input_c);
	
	printf("U input the char is %s\n",input_c);
	
	if(judge(input_c) == 1)
		printf("Yes,U input is plalindrome~!!!!\n");
	else
		printf("No,U input is not the  plalindrome~!!!!\n");
	
	return 0;
	
 }
 
 
 /*--9.2.c--*/
 
 
 
 /*--9.3.c--*/
 
 
 