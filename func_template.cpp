#include <iostream>
using namespace std;
// concept - function template 
template <class T>
void swapping(T &x,T &y){
	// swapping of two values 
	T temp = x; // type of temp will be defined by the type of parameter passed
	x = y;
	y = temp;
}
void values(int a,int b,float m,float n){
	cout<<" before swapping :"<<endl;
	cout<<" a = "<<a<<" b = "<<b<<endl;
	swap(a,b);
	cout<<" after swapping :"<<endl;
	cout<<" a = "<<a<<" b = "<<b<<endl;
	cout<<" before swapping :"<<endl;
	cout<<" m = "<<m<<" n = "<<n<<endl;
	swap(m,n);
	cout<<" after swapping :"<<endl;
	cout<<" m = "<<m<<" n = "<<n;
	
	
}
int main() {
	// implementing code
	values(10,20,5.6,2.3);
	return 0;
}