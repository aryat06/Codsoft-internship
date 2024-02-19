#Number guessing game
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	int n;
	int g;
	int chance=0;
	srand(time(0));
	n=rand()%100+1;   //Generates a random num btwn 1 to 100
	cout<<"\t\t\t Welcome to Guess the number game! \n\n";
	
	do
	{
		cout<<"Enter your guess between 1 and 100: ";
		cin>>g;
		chance++;
		
		if(g>n)
		   cout<<"Too high!\n\n";
		else if(g<n)
		   cout<<"Too low!\n\n";
		   
		else
		    cout<< "\n Correct! You got it in "<< chance<<" guesses!\n";
		    
	}while(g!=n);
	
	return 0;	
}
