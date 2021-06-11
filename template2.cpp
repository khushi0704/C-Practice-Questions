#include <iostream>
// producing error 
using namespace std;
const size=3 ;
template <class T>
class vector{
		/* concept = class template  
____what is class template ?___  in the previous prgm suppose we want to have float type
____values in the array instead of int values , then we'll have to redefine everything again inside
____  the class int with float values , that's burdersome we'll have to re define a new class evrytime
____templates helps us resolve this prblm , lets look at how */
// syntax for defining a class template
	T* v;
	public:
	vector(){
	v = new T[size];
	for(int i=0;i<size;i++)
	v[i]=0;
	}
	vector(T* a){
		for(int i=0;i<size;i++)
		v[i]=a[i];
	}
	T operator* (vector &y){
		T sum=0;
		for(int i=0;i<3;i++){
			sum+= this->v[i] * y.v[i];
			return sum;
		}
	}
	void display(void){
		for(int i=0;i<size;i++){
			cout<<v[i]<<"\t";
			cout<<"\n";
		}
	}
	
};
int main() {
	int x[3] = {1,2,3};
	int y[3] = {4,5,6};
	vector <int> v1;
	vector <int> v2;
	v1=x;
	v2=y;
	v1.display();
	v2.display();
	cout<<" v1 * v2 = "<<v1*v2;
	
	return 0;
}