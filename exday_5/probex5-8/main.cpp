#include <iostream>
#include <string>
#include <queue>

using namespace std;
int main(){
    //char suji[10]={'0','1','2','3','4','5','6','7','8','9'};
    string kannsuji[10]={"○","一","二","三","四","五","六","七","八","九"};
    string input;
    queue<char> q;
    cout<<"数字を入力:";
    cin>>input;
    for(int i=0;i<input.length();i++){
        q.push(input[i]);
    }
    while (!q.empty()){
        int num=q.front()-48;
        cout<<kannsuji[num];
        q.pop();
        if(q.size()%3==0&&q.size()!=0){
            cout<<",";
        }
    }cout<<"\n";
    return 0;
}
