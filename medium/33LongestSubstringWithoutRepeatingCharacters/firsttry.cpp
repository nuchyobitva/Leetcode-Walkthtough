class Solution {
public:
    int lengthOfLongestSubstring(const string& s) {
    size_t len = s.size();
    if (len < 2) return len; //     return if size is 0 or 1

    int max_len = -1;
    int cur_max_len = 0;
    unordered_set<char> a;

    for (const char& i : s) {   //  узнаём мощность алфавита
        a.insert(i);
    }
    max_len = a.size();

    for (int i = 0; i < len - 1; i++) {
        a.clear();                          //  cleaning our set and the counter
        int cur_len = 0;

        for (int j = i ; j < len; j++) { //  counting new subset
            a.insert(s[j]);
            cur_len++;

            if (cur_len != a.size()) {  // break if there is a repeating char
                cur_len--;
                break;
            }
        }
        if (cur_len == max_len) {           
            return max_len;
        }
        else if(cur_len > cur_max_len){
            cur_max_len = cur_len;
        }
    }

    return cur_max_len;
}
};
