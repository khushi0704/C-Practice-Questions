#include <iostream>
#include <string>
using namespace std;
class solution{
	public:
	bool isSequence(string s,string t){
	int tpos = 0;
	for(int i=0;s[i]!='\0';i++){
		while(t[tpos] && t[tpos]!=s[i]){
			tpos+=1;
			if(t[tpos]=='\0'){
				return false;
				tpos+=1;
			}
		}
		return true;
	}
	}
};
int main() {
	solution b;
    int test;
    string s2="coronavirus";
    cin>>test;
    while(test){
        string s1;
        cin>>s1;
    int result = b.isSequence(s1,s2);
    cout<<result<<endl;
    test--;
    }
	return 0;
}