#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    string input;
    queue<string> q;
    while(true){
        cout<<"文字列を入力:";
        cin>>input;
        if(input=="abc"){
            break;
        }else{
        q.push(input);
        }
    }
    while (!q.empty()){
        cout<<q.front()<<endl;
            q.pop();
    }
    return 0;
}