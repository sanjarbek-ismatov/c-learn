#include <string>
#include <cstring>
using namespace std;
class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;

        for(int i = 0; i < s.length() - 1; i++){
            int temp = s[i] - s[i + 1];
             score += temp < 0 ? -temp : temp;
        }
        return score;
    }
};