#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
//MEMBERS:
//Judy Ann O. Gravoso - Section GA
//Princess Noelyn T. Tubil - Section GC
//Nurfaiza R. Kasim - Section GB
//Harold A. Dinglasa - Section GA
int main()
{
	//Defining the three variables and initializing them.
	double operand_1, operand_2;
	char operation;
	cout<<"\n\n\t\t\t\t\t\t*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\t"<<endl;
	cout<<"\n\n\t\t\t\t\t		   WELCOME TO THE SIMPLE CALCULATOR\t"<<endl;
	cout<<"\n\t\t\t\t\t 			PROGRAMMED BY: GROUP 14\t"<<endl;
	cout<<"\n\n\t\t\t\t\t\t*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\t"<<endl;
	cout<<endl;
	cout<<"\n\n\t\t\t\t\t\t----------------------------------------------------";
	cout<<"\n\n\t\t\t\t\t\tEnter the two operands you wish to operate and the";
	cout<<"\n\n\t\t\t\t\t\tdesired arithmetic operation in the middle. Only";
	cout<<"\n\n\t\t\t\t\t\tdecimal or integer operands should be used.";
	cout<<"\n\n\t\t\t\t\t\t(THE OPERATIONS ARE: +,-,*, and /)\n";
	cout<<"\n\n\t\t\t\t\t\t              (EXAMPLE: 1+1 OR 1.0+1.0)";
	cout<<"\n\n\t\t\t\t\t\t----------------------------------------------------";
	do{//Here we are using the "do while" loop in order for the break statement to terminate the program.
	cout<<"\n\n\t\t\t\t\t\tEnter here>> ";cin>>operand_1>>operation>>operand_2;cout<<endl;//Receiving variables from the input.
    /*Below, we use an "if" statement to test the operation used in the input. If the input is not an arithmetic operation,
	the simple calculator will display "Math ERROR: invalid operation" and by pressing "enter", the simple calculator will 
	return what it started to display. On the other hand, using the "else if" statement to test the operands and operation from 
	the input. If the input of the user for the operation lies within a certain arithmetic operation, the simple calculator will 
	display an answer or result by pressing "enter" of the two operands calculated together for that certain arithmetic operation. 
	After that, according to what it started to display, the simple calculator will return by pressing "enter".*/
    if(operation!='+'&&operation!='-'&&operation!='*'&&operation!='/')
    {
    	cout<<"\n\t\t\t\t\t\tMath ERROR: invalid operation.\n";
	}else if(operation=='+'){
		cout<<"\n\t\t\t\t\t\t= "<<operand_1+operand_2<<endl;
	}else if(operation=='-'){
		cout<<"\n\t\t\t\t\t\t= "<<operand_1-operand_2<<endl;
	}else if(operation=='*'){
		cout<<"\n\t\t\t\t\t\t= "<<operand_1*operand_2<<endl;
	}else if(operation=='/'){
		if(operand_2==0){/*Here, operand_2 is tested for the value of "0". If operand_2 contains "0," the "division"does not take place.
						 And therefore, the simple calculator will display "Math ERROR: division by zero is not possible". */
		cout<<"\n\n\t\t\t\t\t\tMath ERROR: division by zero is not possible";
		}else cout<<"\n\n\t\t\t\t\t\t= "<<operand_1/operand_2;
}else break;
}while(0);
getch();
system("cls");
return main();
}

