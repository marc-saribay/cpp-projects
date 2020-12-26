#include <iostream.h>
main() {
	for (int r=1; r<=5; r++) {
		for (int c=1; c<=5; c++)
			if (((r==1) && (c<=5)) || ((r==2) && (c==1)) || ((r==3) && (c<=3)) || ((r==4) && (c==1)) || ((r==5) & (c<=5)))
				cout<<"*";
			cout<<" ";
			cout<<endl;
	}
			return 0;
}