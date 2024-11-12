#include<iostream>
#include<vector>
using namespace std;

int main(){
    // initialize
    // 1st
    vector<int> vect;
    // 2nd
    vector<int> vect1={3, 7, 8, 9};
    // 3rd
    vector<int> vect2(3,10);
     // insert elements into vector
    vect.push_back(1); 
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);
    // display the size of the vector
    cout<<vect.size()<<endl;
    // display the capacity of the vector
    cout<<vect.capacity()<<endl;
    // display elements in vector
    for(int val:vect){
        cout<<val<<" ";
    }
    cout<<endl;
    // display elements in vector using the 2nd method
    for(int val:vect1){
        cout<<val<<" ";
    }
    cout<<endl;
    // display elements in vector using the 3rd method
    for(int val:vect2){
        cout<<val<<" ";
    }
    cout<<endl;
    // delete elements from vector
    vect.pop_back();
      for(int val:vect){
        cout<<val<<" ";
    }
    cout<<endl;
    // show the first element in vector
    cout<<"Front element value: "<<vect.front()<<endl;
    // show the last element in vector
    cout<<"Back element value: "<<vect.back()<<endl;
   
    // check if vector is empty
    if(vect.empty()){
        cout<<"Vector is empty"<<endl;
    }else{
        cout<<"Vector is not empty"<<endl;
    }
    // insert elements at a specific position
    vect.insert(vect.begin()+2, 6);
    for(int val:vect){
        cout<<val<<" ";
    }
   
    cout<<endl;
    // remove elements at a specific position
    vect.erase(vect.begin()+2);
    for(int val:vect){
        cout<<val<<" ";
    }
    cout<<endl;
// iterators of vector
    // vector<int>::iterator it;
    for(vector<int>::iterator it=vect.begin(); it!=vect.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    // reverse vector
    for(auto it=vect.rbegin(); it!=vect.rend(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    // clear the vector
    vect.clear();
cout<<"isEmpty:"<<vect.empty()<<endl;
    return 0;
 
}