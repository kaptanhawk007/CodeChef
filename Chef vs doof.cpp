#include <iostream>
using namespace std;

void check(int a[],int n)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout<<"NO"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    check(a,n);
	}
	return 0;
}

