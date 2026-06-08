class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        for(int i=0;i<ransomNote.size();i++){
            int index=ransomNote[i]-'a';
            freq1[index]++;
        }
        for(int i=0;i<magazine.size();i++){
            int index=magazine[i]-'a';
            freq2[index]++;
        }
        for (int i = 0; i < 26; i++) {
            if (freq1[i] > freq2[i]) {
                return false;
            }
        }
    return true;}
};