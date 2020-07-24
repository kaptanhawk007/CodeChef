#include<iostream>
using namespace std;
int main()
{
	int t,n,c,m,r;
//	cout<<"Enter Number of test cases "<<endl;
	cin>>t;
	while(t!=0)
	{int countc=0,countm=0,cp=0,mp=0;
	//	cout<<"Number of rounds ? "<<endl;
		cin>>n;
		for(int i=0;i<n;i++)
		{countm=0;
		countc=0;
	//		cout<<"Chefs cards value "<<endl;
			cin>>c;
	//		cout<<"Montys cards value "<<endl;
			cin>>m;
		
			while(c!=0)	
			{
		  		r=c%10;
		  		countc=countc+r;
		  		c=c/10;
			}
		
		
			while(m!=0)
				{
				r=m%10;
				countm=countm+r;
				m=m/10;
				}
		
		
				if(countm>countc)
				{
					mp=mp+1;
				//	cout<<"mp won +1 "<<endl;
			
				}
				else if(countm==countc)
				{
					mp=mp+1;
					cp=cp+1;
				//	cout<<"Both won "<<endl;
				}
				else
				{
					cp=cp+1;
				//	cout<<" cp won"<<endl;
				}
			}
			if(cp>mp)
			{
				cout<<"0 \t"<<cp<<endl;
			}
			else if(cp==mp)
			{
				cout<<"2 \t"<<cp<<endl;
			}
			
			else 
			{
				cout<<"1 \t"<<mp<<endl;
			}
			
		
		t--;
	}
	
	
	
	
}
