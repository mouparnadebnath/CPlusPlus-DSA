#include<iostream>
using namespace std;
// Program to check if an alphabet is a vowel or a consonant.
int main(){
char c;
cout<<"enter a character";
cin>>c;
int lowercaseVowel,uppercaseVowel;
lowercaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
uppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if (lowercaseVowel||uppercaseVowel)
{
    cout<<c<<" is an vowel"<<endl;
}
else
{
    cout<<"consonant";
}

    return 0;
}   