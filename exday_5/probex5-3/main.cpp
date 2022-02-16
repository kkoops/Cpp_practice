#include <iostream>
#include <set>

using namespace std;

int main(){
    set <int> numset;
    cout<<"乱数:";
    for(int i=0;i<10;i++){
        int num=rand()%10+1;
        cout<<num<<" ";
        numset.insert(num);
    }
    cout<<endl;
    set <int> ::iterator it;
    cout<<"出現した数:";
    for(int i=1;i<11;i++){
        it=numset.find(i);
        if (it!=numset.end()){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}