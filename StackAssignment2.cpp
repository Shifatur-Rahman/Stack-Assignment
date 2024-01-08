#include <iostream>
#include <bits/stdc++.h>
#include <stack>

using namespace std;
int main(){

string str;
cin>>str;
stack<char> stk;

for(auto ch: str){
    if(stk.empty()){
        stk.push(ch);
    } else{
       if(stk.top() == ch){
        stk.pop();
       }else{
       stk.push(ch);
       }
    }
}

string res = "";
while(!stk.empty()){
    res = stk.top() + res;
    stk.pop();
}

cout<<res<<endl;

}

// Time Complexity = 0(n)
// Space Complexity = 0(n)
