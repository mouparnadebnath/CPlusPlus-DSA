#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_front(5);
    l.push_front(50);
    l.push_front(15);
    list<int>::iterator it;
    for(it = l.begin(); it != l.end(); ++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    l.pop_back();
    l.pop_front();
   cout<< l.size()<<endl;
   cout<<
    // print using for each loop 
    for(int val:l){
        cout<<val<<" ";
    }
    return 0;
}