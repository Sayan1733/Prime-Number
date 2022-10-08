#include <iostream>
#include <conio.h>

//Find the number is pime number or not

using namespace std;

int main() 
{	
	int n,i;
	cout<<"Enter a number";
	cin>>n;
	
	for(i=2;i<n;i++)
	{
		//found a factor of n.
		if(n%i==0){
			cout<<"The number is not prime"<<endl;
			break;
		} 
		
	}
	//End of all iteration
	if(i==n){
			cout<<"the number is prime"<<endl;	
		}
			
	getch();
	return 0;
}
