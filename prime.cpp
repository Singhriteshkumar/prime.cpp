#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int start,n,count,last,i,j,c;
	cout<<"\t\tcount prime number ";
	cout<<"\n\t\t-------------------";
	cout<<"\nenter first number :";
	cin>>start;
	cout<<"enter lest number :";
	cin>>last;
	for(i=start;i<=last;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			n=i%j;
			if(n==0)
			{
				count++;
				
			}
		}
		if(count==2)
		{
			cout<<"   "<<i;
			c++;
		}	
	}
	cout<<"\n"<<c;
	return 0;
}
