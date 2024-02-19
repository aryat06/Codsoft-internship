#Calculator

#include<iostream>
using namespace std;

int main()
{
	char op;
	float n1, n2;
	
	cout<<"Enter the operands: "<<endl;
	cin>>n1>>n2;
	
	cout<<"Enter the operator: "<<endl;
	cin>>op;
	
	cout<<"Your result: "<<endl;
	switch(op)
	{
        
		case '+':
			cout<<n1<<" + "<<n2<<" = "<<n1+n2;
			break;
		case '-':
			cout<<n1<<" - "<<n2<<" = "<<n1-n2;
			break;
		case '*':
			 cout<<n1<<" * "<<n2<<" = "<<n1*n2;
			 break;
		case '/':
			   cout<<n1<<" / "<<n2<<" = "<<n1/n2;
			   break;
		default:
			// if the operators are other than +,-,*,/ error messsge is shown
			cout<<" Error! operator is not correct";
			break;
	}

    return 0;

}
