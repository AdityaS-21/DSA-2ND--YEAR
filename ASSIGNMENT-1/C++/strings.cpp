#include <iostream>
#include <string>
using namespace std;

int main() {
	string a1,b1;
    cin>>a1>>b1;
    int len1 = a1.size();
    int len2 = b1.size();
    string c=a1+b1;
    cout<<len1<<" "<<len2<<endl;
    cout<<c<<endl;
    string temp;
    temp = a1[0];
    a1[0] = b1[0];
    b1[0] = temp[0];
    cout<<a1<<" "<<b1;  
    return 0;
}
