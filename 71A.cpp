#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        if(s.length()<=10) {
            cout<<s<<endl;
        }
        else {
            string ans;
            ans+=s[0];
            ans+=to_string(s.length()-2);
            ans+=s[s.length()-1];
            cout<<ans<<endl;
        }
    }
    return 0;
}
