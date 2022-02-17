#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    string words[12]={"room","wonderful", "pork", "trap", "kind", "money", "dog", "given", "yellow", "eat", "apple", "neighbor"};
    map <char,string> start;
    map <string,char> end;
    for(int i=0;i<12;i++){
        start[words[i][0]]=words[i];
    }
    for(int i=0;i<12;i++){
        end[words[i]]=words[i][words[i].length()-1];
    }
    for(int j=0;j<12;j++){
    char s=words[j][0];
    for(int i=0;i<12;i++){
        cout<<start[s]<<" ";
        s=end[start[s]];
    }}
    cout<<endl;
    return 0;
}