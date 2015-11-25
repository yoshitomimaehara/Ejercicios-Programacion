#include<iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		if(i==1 || i==10)
		{
			for(j=1;j<=10;j++)
			{
				cout<<"*";
			}
			cout<<"\n";
		}	
		else
		{
			for(j=1;j<=10;j++)
			{ 
				if(j==1 || j==10)
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}		
			}
			cout<<"\n";
		}
	}
  
  system("pause");
}
