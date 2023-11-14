//Four students' random selector
//Judy Ann O. Gravoso - Section GA
//Princess Noelyn T. Tubil - Section GC
//Nurfaiza R. Kasim - Section GB
//Harold A. Dinglasa - Section GA
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <ctime>
#include <windows.h>
#include <dos.h>

using namespace std;

	int main() 
	{
	//Defining the three variables and initializing them.
	int random; 
	string student1, student2, student3, student4;
	cout<<"\n\n\t\t\t\t\t\t=============================================\t\t"<<endl;
	cout<<"\n\n\t\t\t\t\t\tWELCOME TO THE FOUR STUDENTS' RANDOM SELECTOR\t\t"<<endl;
	cout<<"\n\t\t\t\t\t\t\t   PROGRAMMED BY: GROUP 14\t\t"<<endl;
	cout<<"\n\n\t\t\t\t\t\t=============================================\t\t"<<endl;
	cout<<endl;
	//Receiving variables from the input.
	cout <<"\t\t\t\t\t\tENTER THE NAMES OF THE FOUR STUDENTS BELOW:\n\n\n";
	cout<<"\t\t\t\t\t\tEnter the name of the first student: ";getline(cin,student1);cout<<endl;
	cout<<"\t\t\t\t\t\tEnter the name of the second student: ";getline(cin,student2);cout<<endl;
	cout<<"\t\t\t\t\t\tEnter the name of the third student: ";getline(cin,student3);cout<<endl;
	cout<<"\t\t\t\t\t\tEnter the name of the fourth student: ";getline(cin,student4);cout<<endl;
	cout<<"\t\t\t\t\t\t            Selecting a student...\n";
	cout<<"\t\t\t\t\t\t     ";
	char x = 219;//for loading screen before the result will appear using for loop and if statement.
	for (int i=0;i<35;i++)
	{
		cout<<x;
		if(i<10)
		Sleep(300);
		if(i>=10&&i<20)
		Sleep(150);
		if(i>=10)
		Sleep(25);
	}
	system("cls");
	srand(time(0)); 
	random = rand() % 4 + 1;//We used this to randomize the 4 students.
	
	switch(random)//This section will randomize the four students and will show who is the chosen one. 
	{
	case 1:cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t===> The selected student is "<<student1<<" <==="<<endl;
	break;
	case 2:cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t===> The selected student is "<<student2<<" <==="<<endl;
	break;
	case 3:cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t===> The selected student is "<<student3<<" <==="<<endl;
	break;
	case 4:cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t===> The selected student is "<<student4<<" <==="<<endl;
	break;
	}
	getch();
	system("cls");
	return main();
}
