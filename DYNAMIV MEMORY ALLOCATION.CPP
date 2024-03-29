#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
	    int n;
	    cin>>n;
	    char arr[1000];
	    cin.getline(arr,n);
	    char arr1[20];
	    for(int i=0;i<n;i=i+2)
	    {
	        if(arr[i]=='0' && arr[i+1]=='0')
	        {
	            cout<<'A';
	            break;
	        }
	        if(arr[i]=='0' && arr[i+1]=='1')
	        {
	            cout<<'T';
	            break;
	        }
	        if(arr[i]=='1' && arr[i+1]=='0')
	        {
	            cout<<'C';
	            break;
	        }
	        if(arr[i]=='1' && arr[i+1]=='1')
	        {
	            cout<<'G';
	            break;
	        }
	        
	        
	    }
	   
	}
	return 0;
}