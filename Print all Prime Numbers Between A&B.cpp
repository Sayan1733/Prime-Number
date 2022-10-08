#include <iostream>
#include <cmath>
#include <conio.h>

//Print all Prime Numbers Between A&B

using namespace std;

bool isprime(int n)					//Declare a Boolean Function
{
	int i;
	for(i=2;i<=n;i++)				//Using loop to check the number is prime or not
	{
		if(n%i==0)
		{
			return false;
		}
		return true;
	}
}

int main()
{
	int a,b;
	cout<<"Enter The Numbes:"<<endl;
	cin>>a>>b;

	for(int i=a;i<=b;i++)							//Taking loop for Printing Prime numbers betwwen a & b
	{
		if(isprime(i)){								//Checking Boolean Funcion/call of Boolean Function
			cout<<i<<endl;
		}
	}
	
	getch();	
	return 0;
}
