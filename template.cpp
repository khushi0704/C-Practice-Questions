#include <iostream>
using namespace std;
/* code is not working 
 concept - template 
 defination - allows to deefine generic classes & functions */
class vector{
	int *v;
	int size;
	public:
	vector(int m){ // this will create a null vector
		v = new int[size = m]; 
		for(int i=0;i<size;i++)
			v[i]=0;
	}
	vector(int *a){ // this will create a vector from an array 
		for(int i=0;i<size;i++)
			v[i]=a[i];
	} 
	int operator*(vector &y){ //scalar product
		int sum=0;
		for(int i=0;i<size;i++)
			sum += this -> v[i] * y . v[i];
			return sum;
	}
};
int main() {
	int x[3]= {1,2,3};
	int y[3]={4,5,6};
	vector v1(3);
	vector v2(3);
	v1=x;
	v2=y;
	int r = v1 * v2;
	cout<<"r = "<<r<<endl;
	return 0;
}