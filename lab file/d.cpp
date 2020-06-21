#include<bits/stdc++.h>
using namespace std ;
int i=0 ;
int j=0 ; 

struct node
{
	int data;
	struct node* right ;
	struct node* left ; 
	 
	};
	struct node*head = (struct node*) malloc (sizeof(struct node)) ; 
	struct node*temp = head ; 
	struct node*temp2 = head ; 
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

void enqueuell(int number )
{
	struct node*temp1=(struct node*) malloc (sizeof(struct node)) ;
	temp1->data = number ;
	temp1->left= temp2  ; 
	temp2-> right = temp1 ; 
	temp1 -> right = NULL;
	temp2 = temp1 ;
	
	
	}
	
void dequeuell()
{
	cout << temp->right->data ;
	 temp = temp->right ; 
	
	
	}
void linkedlist()
{ 	
	enqueuell(9);
	enqueuell(8);
	dequeuell();
	dequeuell();
	
	
	
	
	}

int main()
{
	
	//arrayimplementation();
	linkedlist();
	
	
	
	}
