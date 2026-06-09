class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        int n=p.size();
        if(p.size()>s.size()){
            return result;
        }
        for (char c : p) {
            freq1[c - 'a']++;
        }
        for (int i = 0; i < n; i++) {
            freq2[s[i] - 'a']++;
        }
        if(freq1==freq2){
            result.push_back(0);
        }

        for (int i = n; i < s.size(); i++) {
            freq2[s[i] - 'a']++;         
            freq2[s[i - n] - 'a']--;     

            if (freq1 == freq2){
                 result.push_back(i-n+1);
            }
        }
    return result;}
};