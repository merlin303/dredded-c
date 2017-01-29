 #include <stdio.h>
/*header file */
int main (int argc,char *argv[])
{
	if (argc < 2)
	{
		printf("%s\n", "Pass your name as an argument");
		return 0;
	}
	else
	{
		printf("Hello %s\n", argv[1]);
	}
} 
/*extraordinarily complicated c program function*/
