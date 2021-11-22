#include <iostream>
#include <string>
using namespace std;

string reverse(string s){
    int lt = 0, rt = s.length()-1;
    while(lt < rt){
        char temp = s[lt];
        s[lt] = s[rt];
        s[rt] = temp;
        rt--;
        lt++;
    }

    return s;
}

int main(){
    string s = "The Daily Byte";
    string ans = reverse(s);
    cout<<ans<<endl;
    return 0;
}