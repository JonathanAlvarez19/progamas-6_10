#include<iostream>
#include<cmath>
using namespace std;

int main (){ 
	float c1,c2, hipo=0;
	
	cout<<"digite cateto1: ";cin>>c1;
	cout<<"digite cateto2: ";cin>>c2;
	
	hipo=sqrt ((c1*c1)+(c2*c2));
	
	cout<<"\nla repuesta es: "<<hipo;
	
	return 0;
}
