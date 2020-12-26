#include <iostream.h>
#include <process.h>
main()
{
	const int e=5;
	int n[e], i, j, t, choice;
	for (i=0; i<e; ++i) {
		cout<<"Enter number "<<i+1<<endl;
		cin>>n[i];
	}
	cout<<endl;
	cout<<"Select Sort Order\n";
	cout<<"[1] Decreasing Order\n";
	cout<<"[2] Increasing Order\n";
	cout<<"[3] Quit Program\n";
	cin>>choice;
	switch(choice) {
		case 1: 
			for (i=0; i<e; ++i)	
				for (j=e-1; j>i; --j)
					if (n[j-1]<n[j]) {
						t=n[j-1];
						n[j-1]=n[j];
						n[j]=t;
					}
			cout<<"\nDecreasing order\n";
			for (i=0; i<e; ++i)
				cout<<n[i]<<endl;
			break;
		case 2:
			for (i=0; i<e; ++i)	
				for (j=e-1; j>i; --j)
					if (n[j-1]>n[j]) {
						t=n[j-1];
						n[j-1]=n[j];
						n[j]=t;
					}
			cout<<"\nIncreasing order\n";
			for (i=0; i<e; ++i)
				cout<<n[i]<<endl;
			break;	
		case 3:
			exit(0);
			break;
		default: cout<<"Invalid Choice\n";
			break;
	}
	return 0;
}