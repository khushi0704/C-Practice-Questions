#include <iostream>
using namespace std;
// class templates with multiple parameters OR 
// default data types in class defination
template <class T1,class T2>
//template <class T1=int,class T2=int> this is for default case 
class test{
	T1 x;
	T2 y;
	public:
	test(T1 a,T2 b){
		x=a;
		y=b;
	}
	void show(){
		cout<<x<<" "<<y<<endl;
	}
};
int main() {
	cout<<" instantiating class template test1 as int and float type : ";
	test<int,float>test1(12,11.5);
	test1.show();
	cout<<" instantiating class template test2 as int and char : ";
	test<int,char>test2(15,'k');
	// for example if we dont specify the type
	// this would be the declaration for class object without types specifications
	// test<> test3('c',15.45) this will output 97 and 15
	test2.show();
	return 0;
}