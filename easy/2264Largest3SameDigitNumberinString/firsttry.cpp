class Solution {
public:
    string largestGoodInteger(string num) {
        unordered_set<string> a;
        int rpt = 0;
        for (int i = 1; i < num.size(); i++){
            if (num[i-1] == num[i]){
                rpt++;
            }
            else rpt = 0;
            if (rpt==2){
                string b = "";
                b += num[i];
                b += num[i];
                b += num[i];
                if (b == "999") return "999";
                a.insert(b);
            }
        }
        if (a.size()==0) return "";
        string tmp = "0";
        for (const string& i:a){
            if(i>tmp){
                tmp = i;
            }
        }
        return tmp;
    }
};
