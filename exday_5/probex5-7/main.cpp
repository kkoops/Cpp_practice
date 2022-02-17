#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    stack<char> stk;
    string input;
    cout<<"英単語を入力:";
    cin>>input;
    for(int i=0;i<input.length();i++){
        stk.push(input[i]);
    }
    while(!stk.empty()){
        cout<<stk.top();
        stk.pop();
    }
    cout<< "\n";
    return 0;
}