#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter Array\n";
	int a[5];
	int i,j,t;
	for(int l=0;l<5;l++){
		cin>>a[l];
	}
	for(i=0;i<=4;i++){
		j=i;
		t=a[j];
		while(j>0 && a[j-1]>t){
			a[j]=a[j-1];
			j=j-1;
		}
		a[j]=t;
	}
	cout<<"Insertion Sort(Ascending Order)\n";
	for(int l=0;l<5;l++){
		cout<<a[l]<<"	";
	}
	cin.get();
	system("pause");
}
