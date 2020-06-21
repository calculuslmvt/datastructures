#include <iostream>
using namespace std;

void insertion(int*a,int n)
{
    int key;                                  // initialization of key to compare different elements of array with it
    
    for(int i=1;i<n;i++)
    {   key=a[i];
        if(key<a[i-1]) {                       // optimisation for reducing time complexity
      
        for(int j=i;j>0;j--)
           { 
            
            if(key<a[j-1])
            {   a[j]=a[j-1];
                a[j-1]=key;
            }
        }
                        }
        
        
    }
    
}



int main(void){
 // code for insertion sort
 
int*a=(int*)malloc(sizeof(int*));     // using pointers for dynamic arrays
int n;
cin>>n;

for(int i=0;i<n;i++)
{
    
    cin>>a[i];
    
}

insertion(a,n);                     // calling insertion sorting 
 
 for(int i=0;i<n;i++)              // printing sorted array
{
    
    cout<<a[i];
    
}

}
