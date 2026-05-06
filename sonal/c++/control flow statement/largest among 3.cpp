#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter number a:";
	cin>>a;
	cout<<"enter number b:";
	cin>>b;
	cout<<"enter number c:";
	cin>>c;
	
	if(a>=b)
	{
		if(a>=c)
		{
			cout<<"a is greatest ";
		}
		else
		{ 
		 cout<<"c is greatest";
		}
	}
	else {
        if (b >= c)
            cout << b;
        else
            cout << c;
    }
	
	
	
	
}
