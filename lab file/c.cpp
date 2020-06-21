#include<bits/stdc++.h>
using namespace std ;
int i=0 ;
int j=0 ; 
void enqueue(int*a,int number)
{
	a[j]=number;
	j++;

	}
	
	
void dequeue(int*a)
{
	cout<< a[i];
	i++;
	
	}
	
	
void arrayimplementation()
{
	int*a=(int*)malloc(sizeof(int));
	
	
	 
	
	
	enqueue(a,9);
	enqueue(a,8);
	
	cout<<a[0]<<endl;
	cout<<a[1]<<endl;
	
	dequeue(a);
	cout<<endl ; 
	dequeue(a);
	}


int main()
{
	arrayimplementation();
	
	
	
	
	}
