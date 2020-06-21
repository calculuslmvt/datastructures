#include<bits/stdc++.h>
 using namespace std;
 
struct node        // creating a node
 {
	 int data;
	 struct node*next;
	 
	 };
	 
	 struct node*head=NULL;  // header pointer
 
 int create()				// creating linked list 
 {
	 //int a;
	 int n;
	 struct node*temp2=(struct node*)malloc(sizeof(struct node*));
	 cout<<"how many numbers do you want to enter";
	 cin >> n;
	 cout<<"enter the numbeers"<<endl;
	 head=temp2;
	 for(int i=0; i<n;i++)
	 {
		 
		 struct node*temp=(struct node*)malloc(sizeof(struct node*));
		 temp2->next=temp;
		 cin>>temp->data;
		 temp2=temp;
		 
		 temp->next = NULL;
	 }
	 
	 head=head->next;
	 
	 //cout<< head->data ; 
	 
	 return n;
	 
	 
	 
		}
 
 void deleting(int n)		// deleting a element in linked list
 {	 int number;
	 cout<< " enter the number you want to delete";
	 cin >> number;
	 struct node* temp = head ;
	 struct node* temp3  =(struct node*)malloc(sizeof(struct node)); 
	 temp3->next= head;
	 struct node* temp2 =temp3;
	 for(int i=0 ; i<n ; i++ )
	 {	
		
		 if(temp -> data == number )
		 {
			 temp2 -> next = temp -> next;
			 //delete( temp ) ;
			 temp2=temp;
			 }
		 temp=temp->next;
		 temp2=temp2->next;
		 
		 
		 
		 }
	 
	 }
 
	void display(int n)		// displaying the edited linked list
	{	struct node*temp = head; 
		//cout<< n;
		
		for(int i=0; i<n ; i++)
		{
			cout<< temp->data <<endl ;
			temp=temp->next;
			
			
			}
		
		
		
		}
 
 
 int main()				  
 {	int n;
	 
	 //struct node*head=(struct node*)malloc(sizeof(struct node*));
	 n=create();      // creating nodes
	 
	 deleting(n);        // deleting a node
	
	 display(n);
	 
	 
	 
	 
	 
	 }
