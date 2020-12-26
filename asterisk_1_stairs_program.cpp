#include <iostream.h>
main () {
	for(int r=1; r<=5; r++) {
		for(int c=r; c<5; c++)
			cout<<" ";
		for(int x=1; x<=r; x++)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}