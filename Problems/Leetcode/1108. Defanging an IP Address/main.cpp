#include<string>
#include<iostream>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        for(int i = 0; i < address.length(); i++){
            if(address[i] == '.'){
                address.insert(i, 1, '[');
                address.insert(i + 2, 1, ']');
                i+=2;
            }
        }
        return address;
    }
};
int main(){
    Solution sol;
    cout << sol.defangIPaddr("1.1.1.1") << endl;
    return 0;
}