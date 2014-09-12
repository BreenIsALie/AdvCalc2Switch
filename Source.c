/*Advanced Calculator Mk5
Mathias Jönsson 12 Sep 2014*/

#include <stdio.h>

int main(void)
{

	float One, Two, Res;	/*Creates variables for user number input, result output and user selection*/
	char Func;

	printf("Enter first number\n");		/*Takes first number and adds to One*/
	scanf_s("\n%d", &One);

	printf("\n\nEnter function\n"); /*Promts user to select funtions via input of the function (+, - , * and so on)*/
	scanf_s("%c", &Func);

	printf("\nEnter second number\n");	/*Takes second number and adds to Two*/
	scanf_s("%d\n", &Two);



	switch (Func)
	{
	
	case '+':
		(Res = One + Two);
		printf("\n%dResult: ", Res);
		break;

	case '-':
		(Res = One - Two);
		printf("\n%dResult: ", Res);
		break;
	case '*':
		(Res = One * Two);
		printf("\n%dResult: ", Res);
		break;
	case'/':
		(Res = One / Two);
		printf("\n%dResult: ", Res);
		break;
	case'x':
		printf("\nPress any key to exit");
		fflush(stdin);
		getchar();
		return 0;
	}

}