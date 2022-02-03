#include <iostream>
#include <string>
 
using namespace std;
 
template<typename T> 
T my_max(T a,T b){
    if(a>b){
        return a;
    }
    return b;
}
int main(){
    cout << my_max<int>(1,2) << endl;
    cout << my_max<double>(1.75,3.12) << endl;
    string s1 = "aiu",s2 = "eo";
    cout << my_max<string>(s1,s2) << endl;
    return 0;
}
 
