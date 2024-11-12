class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int maxi=0,curr=0;

        for(int i=0;i<s.length();i++){
            char ch=s[i];
if(ch=='('){
    curr++;
    maxi=max(maxi,curr);
}else{
    if(ch==')'){
        curr--;
    }
}
        }
        return maxi;
    }
};