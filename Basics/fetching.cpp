#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    string fetchstring(string str){

        string Newstr = str;
        Newstr[0] = 'G';
        return Newstr;
    }
};
int main(){
    string og = "ghosty";
    Solution s;
    string curated = s.fetchstring(og);
    cout <<curated<< endl;
    cout<<og<<endl;

}