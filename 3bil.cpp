#include <iostream>
using namespace std;

int main() {
	
	int max,mid,min,a,b,c;
	
	menu : 
	cout<<"masukkan a : "; cin>>a;
	cout<<"masukkan b : "; cin>>b;
	cout<<"masukkan c : "; cin>>c;
	cout<<"-------------------------"<<endl;
	
	if (a<b & a<c){
	     if(b<c){
	     	cout<<a<<" "<<b<<" "<<c<<endl;
		 } else{
		 	cout<<a<<" "<<c<<" "<<b<<endl;
	
		 }
	
	}
	
	
	else if (b<a & b<c){
	     if (c<a){
	     	cout<<b<<" "<<c<<" "<<a<<endl;
		 } else {
		 	cout<<b<<" "<<a<<" "<<c<<endl;
		 } 
}

	else{
		if(b<a){
		cout<<c<<" "<<b<<" "<<a<<endl;
		} else {
			cout<<c<<" "<<a<<" "<<b<<endl;
		}
	
	}
	




	system ("pause");
	system("cls");
	goto menu;
}
