#include <iostream.h>
#include <math.h>
main() {
double r,a,b=1,q=0;
	cout<<"                 Division through Repeated Subtraction \n";
	cout<<endl;
	cout<<"Enter Dividend:   ";
	cin>>a;
	cout<<"\n";
	do {
		cout<<"Enter Divisor:    "; 
		cin>>b;
		cout<<"\n";
	} while (b==0);
	
	do {
		a=a-b;
		q++;
	} while (a>=b);
	
	cout<<"quotient = "<<q<<endl;
	cout<<endl;
	r=fmod(a,b);
	cout<<"remainder = "<<r<<"\n";
	cout<<endl;
	return 0;
}