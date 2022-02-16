#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    set <char> alp;
    string input;
    cout<<"英単語を入力:";
    cin>>input;
    cout<<"使用されているアルファベット:";
    set <char>::iterator it;
    for(int i=0;i<input.length();i++){
        alp.insert(input[i]);
    }
    for(it=alp.begin();it!=alp.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}