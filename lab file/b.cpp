#include <bits/stdc++.h>
using namespace std;

struct node					// creating node
{
	int data ;
	struct node* right ;
	struct node* left ; 	
	};
 struct node*head=NULL; 	//  header pointer
int creating()				// creating function
	{
		int n;
		cout<< "how many no. do you want to enter";
		cin >> n;
		
		struct node*temp1 = (struct node*)malloc(sizeof(struct node)); 
		head =temp1 ; 
		for(int i =0 ; i<n ; i++ )
		{
			
			struct node*temp =(struct node*)malloc(sizeof(struct node));; 
			temp1 -> right = temp; 
			temp ->left = temp1 ;
			temp->right = NULL;
			 cin >> temp -> data;
			temp1 = temp ; 
			
		}
		head = head->right ;
		
		
	 
		return n ;
	}

	void deleting(int n)	// deleting function
   {	int a;
		struct node*temp = head;
		 
		cout<< " enter the no. you want to delete";
		cin >> a;
		  
		 for (int i=0 ; i<n ; i++)
		 {	
			  
			 if(temp-> data == a )
			 {
					cout << " you have selected "<< temp-> data<< endl  ; 
				 temp->left->right = temp->right; 
				
				 cout<<endl << "we deleted " << temp->data ; 
				  
			 }
			temp = temp->right ;
			 
		}
			 
			 
			 
    }


	void display (int n)	//display function
	{
		struct node*temp = head;
		
		for (int i=0 ; i<n ; i++)
		{
			cout<< endl << temp->data; 
			temp=temp->right; 
			
			
			}
		
		
		
		}

int main()             // program for doubly linked list

{	int n;
	
	n=creating();
	// cout<< endl<< n; 
	 deleting(n); 
	
	 display(n);


}
