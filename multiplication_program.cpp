#include <iostream.h>
main() {
int a,b, p=0;
	cout<<"                 Multiplication through Repeated Addition \n";
	cout<<endl;
	cout<<"Enter number for A:   ";
	cin>>a;
	cout<<"\n";
	cout<<"Enter number for B:   "; 
	cin>>b;
	cout<<"\n";
	for (int i=1; i<=a; i++) {
		p=p+b;
	}
	cout<<"The product of A and B is equal to   "<<p<<"\n";
	cout<<endl;
	return 0;
}