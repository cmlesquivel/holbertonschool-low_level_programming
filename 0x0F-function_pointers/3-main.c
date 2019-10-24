#include "3-get_op_func.c"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int num1, num2, answer;
	char operator;
	
	
	if(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(((argv[2])[0] == '+') || ((argv[2])[0] == '-') || ((argv[2])[0] == '*') || ((argv[2])[0] =='/') || ((argv[2])[0] == '%')))
	{
		printf("Error\n");
		exit(99);
	}
	if((argv[2]=="/" && argv[3]=="0") || argv[2]=="%" && argv[3]=="0")
	{
		printf("Error\n");
		exit(100);
	}

	printf("exitoso");

	num1= atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator =(argv[2])[0];
	
	answer =(*get_op_func(operator))(num1, num2);

	printf("%d\n",answer);
	

	return (0);
}
