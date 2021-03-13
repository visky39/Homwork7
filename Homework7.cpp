#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;
int main()
{
	int number,count = 0,guess;
	cout<<"###Welcome to guessing number game###"<<endl;
	cout<<"Secret number has been chosen"<<endl;
	srand(time(NULL));
	number = 1+rand()%10;
	do{
		cout<<"Guess the number (1 to 10) : ";
		cin>>guess;
		count++;
		if(number>guess)
		{
			cout<<"The Secret number is lower"<<endl;
		}
		else if(number<guess)
		{
			cout<<"The Secret number is higher"<<endl;
		}
	}while(number!=guess);
	cout<<"Congratulations!"<<endl;
	cout<<"The secret number is "<<number<<endl;
	cout<<"You made "<<count<<" guesses"<<endl;
	return(0);
}