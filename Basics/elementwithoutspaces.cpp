#include <iostream>
using namespace std;

class sol{
    public:
    void acesseles(string s){
        for(int i=0;i<s.length(); i++){
            cout<<s[i]<<endl;
        }
    }
};

int main(){
    sol obj;
    string s;
    cin>>s;
    obj.acesseles(s);

    return 0;
}