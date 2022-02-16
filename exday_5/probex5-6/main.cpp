#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string input;
    stack<string> s;
    while(true){
        cout<<"文字列を入力:";
        getline(cin,input);
        if(input=="\0"){
            break;
        }else{
        s.push(input);
        }
    }
    while (!s.empty()){
        cout<<s.top()<<endl;
            s.pop();
    }
    return 0;
}