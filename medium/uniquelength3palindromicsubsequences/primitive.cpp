#include <string>
#include <map>
#include <set>
using namespace std;

class Solution {
private:

    set<string> a;
    map<char, int> b;
    set<char> c;

public:

    string remake(string s) {
        string new_s = "";
        uint16_t rpt = 0;
        char prev_char = s[0];
        for (const char& i : s) {
            if (i == prev_char) {
                rpt++;
            }
            else {
                rpt = 1;
            }
            prev_char = i;
            if (rpt <= 3) {
                new_s += i;
            }
        }
        return new_s;
    }



    int countPalindromicSubsequence(string s) {
        int cnt = 0;
        if (s.size() > 400) s = remake(s);
        for (const auto& i : s) {
            c.insert(i);
            if (c.size() > 25) break;
        }
        int x = pow(c.size(), 2);
        for (int i1 = 0; i1 < s.size() - 2; i1++) {

            char _i1 = s[i1];
            if (b[_i1] == 26) continue;

            for (int i2 = i1 + 1; i2 < s.size() - 1; i2++) {
                string tmp = ""; tmp += _i1; tmp += s[i2];
                if (a.count(tmp) > 0) continue;
                for (int i3 = i2 + 1; i3 < s.size(); i3++) {
                    if (_i1 == s[i3]) {
                        a.insert(tmp);
                        cnt++;
                        if (cnt == x) return cnt;
                        b[_i1]++;
                        break;
                    }
                }

            }
        }
        return cnt;
    }
};

