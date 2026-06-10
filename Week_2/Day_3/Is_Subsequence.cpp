class Solution {
public:
    bool isSubsequence(string s, string t) {
       int spointer=0;
       int tpointer=0;
       while(tpointer<t.size()&&spointer<s.size()){
       if(s[spointer]==t[tpointer]){
         spointer++;
       }
       tpointer++;
    }
    if( spointer==s.size()){
        return true;
    }
    else{
        return false;
    }
    return true;}
};