#include <iostream.h>
#include <ctype.h>
main() {
	int a=0,n,b=1,t;
	cout<<"                     Fibonacci Series\n";
	cout<<"Enter nth term: ";
	cin>>n;
	for (int i=1; i<=n; i++) {
		t=a;
		cout<<endl<<t;
		a=b;
		b=b+t;
	}
	cout<<endl;
	return 0;
}