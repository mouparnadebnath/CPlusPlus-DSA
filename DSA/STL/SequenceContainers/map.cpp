#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    map<string, int> mp;
    vector<string> words = {"apple", "banana", "apple", "cherry", "banana", "cherry", "banana"};
    for(string word : words){
        mp[word]++;
    }
    for(auto pair : mp){
        cout<<pair.first<<" : "<<pair.second<<endl;
    }
    return 0;
 
}