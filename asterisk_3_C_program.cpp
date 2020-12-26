#include <iostream.h>
main () {
	for (int r=1; r<=8; r++) {
		for (int c=1; c<=6; c++) 
			if (((r==1||r==8)&&(c==3||c==4))||((r==4||r==5)&&c==1)||((r==2||r==7)&&(c==2||c==5))||((r==3||r==6)&&(c==1||c==6)))
				cout<<"*";
			else
				cout<<" ";
		cout<<endl; 
	}
	return 0;
}