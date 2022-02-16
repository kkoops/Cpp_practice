#include <iostream>
#include <string>
#include <map>

using namespace std;
int main(){
    map <string,string> animal;
    string english[]={"cat","dog","bird","tiger"};
    string japanese[]={"猫","犬","鳥","虎"};
    for (int i=0;i<4;i++){
        animal[english[i]]=japanese[i];
    }
    string inputname;
    cout<<"英語で動物の名前を入力してください:";
    cin>>inputname;
    map<string, string>::iterator itr;
    itr = animal.find(inputname);
    if (itr == animal.end()) {
        cout << "対応するデータは登録されていません．" << endl;
    } else {
        cout << "「" << itr->second << "」です．" << endl;
    }
}