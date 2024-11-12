#include<iostream>
#include<vector>
#include<stack>
using namespace std;


bool sorted( vector<int>& v1, vector<int>& v2){
    return v1[0]<v2[0];
}
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // sort at first
        sort(intervals.begin(),intervals.end(),sorted);
        // push into stack
     stack<vector<int>> s;
     s.push(intervals[0]);
    //  iterate through 1st index
    for(int i=1;i<intervals.size();i++){
        int lastElement=s.top();
        int currentElement=intervals[i];
        if(lastElement[1]>=currentElement[0]){
            s.pop();
            vector<int> merged=(lastElement[0],max(lastElement[1],currentElement[1]);
            s.push(merged);
        }
        else{
            s.push(currentElement);
        }

    } 
    stack<vector<int>> newSt;
    while(s.top()>0){
        int st=s.top();
        newSt.push(st)
        s.pop();
    }
    while(newSt.top()>0){
        cout<<newSt.top();
        newSt.pop();
    }
    };


int main(){
    int n;
    cin>>n;
vector<vector<int>> pairs(n);
for (int i = 0; i < n; i++)
{
 int x,y;
  cin>>x>>y;
  pairs[i].push_back(x);
  pairs[i].push_back(y);
}
vector<vector<int>> ans=merge(pairs);
for(auto i:ans){
    for(auto j:i){
        cout<<j<<" ";
    }
}
cout<<endl;
cout<<"~"<<endl;
return 0;
}