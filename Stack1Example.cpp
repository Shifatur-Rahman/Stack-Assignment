#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main(){

string str;
cin>>str;
stack<int> stk;

for(auto ch: str){
    if(ch=='(' || ch=='{' || ch=='['){
        stk.push(ch);
    }
    else{

        if(stk.empty()){
            cout<<"false";
            return false;
        }

        char opening = stk.top();
        stk.pop();

        if(ch==')' && opening !='(' ){
            cout<<"false";
            return false;
        }
        if(ch=='}' && opening !='{' ){
            cout<<"false";
            return false;
        }
        if(ch==']' && opening !='[' ){
            cout<<"false";
            return false;
        }
    }
}

   if(stk.empty()){
    cout<<"true"<<endl;
    return true;
   } else{
    cout<<"false"<<endl;
    return false;
   }

}

//   Time Complexity -> 0(n)
//   Space Complexity -> 0(n)
