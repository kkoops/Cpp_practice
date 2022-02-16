#include <iostream>
#include <string>
#include <map>

using namespace std;
int main(){
    map <char,string> index;
    char suji[10]={'0','1','2','3','4','5','6','7','8','9'};
    string kannsuji[10]={"○","一","二","三","四","五","六","七","八","九"};
    string  input;
    cout<<"整数の値を入力してください:";
    for(int i=0;i<10;i++){
        index[suji[i]]=kannsuji[i];
    }
    cin>>input;
    for(int i=0;i<input.length();i++){
       cout<<index[input[i]];
       if((input.length()-i-1)%3==0){
           cout<<",";
       }
    }
    cout<<endl;
    return 0;
}
