#include<bits/stdc++.h>
using namespace std ;
struct node 
{
	int data ;
	struct node* right;
	struct node* left ;
	
	};
	struct node*root=(struct node*)malloc(sizeof (struct node *)) ;
	struct node*temp3=(struct node*)malloc(sizeof (struct node *)) ;
	
struct node* tree (struct node*ptr ,int n )
{
	
 	if(((ptr->left)==NULL) && ((ptr->data) > n) )
	{
	struct node*temp = (struct node*)malloc(sizeof (struct node *)) ;
	temp->data = n ;
	ptr -> left = temp ;
	temp->right=NULL;
	temp->left=NULL;
	//cout<<"lol";
	return temp ;  
	
	 }
	 
	if((ptr-> right == NULL) && (ptr-> data < n ))
	{
	struct node*temp = (struct node*)malloc(sizeof (struct node *)) ;
	temp->data = n ;
	ptr -> right = temp ;
	temp->right=NULL;
	temp->left=NULL;
	return temp;
	 }
	
	
	
	 if (ptr->data > n )
	{	
		ptr = tree (ptr -> left , n );
		return ptr;
		
			
		}
	
	if(ptr-> data < n )
	{
		ptr=tree(ptr-> right ,n );
		return ptr ; 
		
		}  
	
	
	
	 
	
	return ptr ;
	
	}	
	
	
	
	
void creating()
{	int n;
	int t;
	cout<<"enter no of nodes except root";
	cin>> t;
	t--;
	cout<< "enter the root node";
	cin >>root->data; 
	root->left=NULL ;
	root->right= NULL;
	
	while(t--)
	{
	 cout<<"enter no.";
	 cin>> n;
	 temp3 =tree(root,n);
	}
	
	
	
	}

void display(struct node*ptr)
{


	//cout<<ptr->right->right->data ;
	if((ptr!=NULL) || (ptr!=NULL))
	{	cout<<" "<<ptr->data<<endl ; 
		display(ptr->right) ;
		display(ptr->left) ; 

	}
  

	}
  
int main()
{
	creating();
	display(root);
	
	
	}

