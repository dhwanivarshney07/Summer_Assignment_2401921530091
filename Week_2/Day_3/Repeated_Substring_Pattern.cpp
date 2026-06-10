class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string subs = s + s;
        string result = subs.substr(1, subs.size() - 2);
    if(result.find(s) != string::npos){
        return true;
    }
    else{return false;}
    return true;}
};