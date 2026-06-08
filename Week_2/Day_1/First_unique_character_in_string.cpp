class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26,0);
        for(int i=0;i<s.size();i++){
            int k=s[i]-'a';
              freq[k]++;
        }
        
        for(int index=0;index<s.size();index++){
            if(freq[s[index]-'a']==1){
               return index;  
                break;
            }
        }
        return -1;
    }
};