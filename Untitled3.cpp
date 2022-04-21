#include<iostream>
using namespace std;
int area(int base,int height){
	return 0.5*base*height;
	
}
int main(){
	int b,h;
	float a;
	cout<<"enter base: "<<b<<endl;
	cout<<"enter height: "<<h<<endl;
	cin>>b;
	cin>>h;
	a=0.5*b*h;
	cout<<"Area of triangle:"<<a<<endl;
	
	area(b,h);
	
}

