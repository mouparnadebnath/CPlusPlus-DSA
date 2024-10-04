// Reverse a string 
#include <iostream>
using namespace std;

void reverseTheString(string s){
    if (s.length()==0)
    {
     return;
    }
    string rest=s.substr(1);
    reverseTheString(rest);
    cout<<s[0];
}
int main(){
    string s;
    getline(cin,s);
    reverseTheString(s);
    return 0;
}