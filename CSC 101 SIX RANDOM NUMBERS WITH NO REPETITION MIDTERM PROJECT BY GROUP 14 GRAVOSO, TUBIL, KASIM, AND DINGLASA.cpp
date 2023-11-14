 //Six random numbers with no repetition.
//Judy Ann O. Gravoso - Section GA
//Princess Noelyn T. Tubil - Section GC
//Nurfaiza R. Kasim - Section GB
//Harold A. Dinglasa - Section GA
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include<bits/stdc++.h>//We are using this header file to reduce our time typing some header files that we need.
#define ll long long //We are using this to store 64-bit integers
#define rep(minimum,maximum) for(int i=minimum; i<=maximum; i++) 
#define ALL(num) num.start(),num.end()
#define S(num) ((int)(num.size()))
#define PB push_back /*PB represents push_back as a function. We are using this method to push elements from the 
back of the vector(sequence containers representing arrays that can change their size during runtime.)*/

using namespace std;

	ll random(ll limit)
	{
	ll value = rand();
	rep(1,10)//represents the number of repeats.
	{
	value *= rand();//The purpose of this is to get possible greater value(s) than the limit.
	value %= limit + 1;//We are using this to get 0 to the limit.
	value += rand();//We are using this to get prime numbers.
	value %= limit + 1;//We are using this again to get 0 to the limit.
	}
	return value;
	}
	
	int main()
	{
	srand(time(0));
	//Declaring variables and initializing them
	ll size = 6 ,minimum,maximum;
	bool uniqueness = true;

	cout<<"\n\n\t\t\t\t\t\t=====================================\t\t";
	cout<<"\n\n\t\t\t\t\t\tSIX RANDOM NUMBERS WITH NO REPETITION\t\t";
	cout<<"\n\n\t\t\t\t\t\t\tPROGRAMMED BY: GROUP 14\t\t"<<endl;
	cout<<"\n\t\t\t\t\t\t=====================================\t\t";
	cout<<"\n\n\t\t\t\t\t\tEnter the Minimum value: ";cin >>minimum;
	cout<<"\n\n\t\t\t\t\t\tEnter the Maximum value: ";cin >>maximum;

	ll difference = maximum - minimum;
	//This section will get the difference between MAXIMUM and MINIMUM
	//Basically in this part, WE ARE GENERATING THE NUMBERS FROM ZERO TO THE DIFFERENCE
	/*WE WILL ADD WHAT WE GENERATED TO "minimum" so => minimum + (0 to the difference) = some number between 
	minimum and maximum*/
	map < ll , bool > mp; 
	vector < ll > random_array;
	rep(1,size)
	{
	ll next = minimum + random(difference);
	/*This section will test if the numbers are random or not.
	In our case, we want our six numbers to be unique from one another.*/
	while( ( mp.find(next) != mp.end() ) && ( uniqueness ) )
	{
	next = minimum + random(difference);
	}
	random_array.push_back(next);
	if( uniqueness )
	{
	mp[next] = true;
	}
	}
	//This section will display the six random numbers WITHOUT REPETITION.
	cout <<"\n\n\t\t\t\t\t\tTHE SIX RANDOM NUMBERS ARE: ";
	rep(0,size-1)
	{
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t"<<random_array[i];
	}
	getch();
	system("cls");
	return main();
	}
