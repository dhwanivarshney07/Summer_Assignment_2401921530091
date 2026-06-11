class Solution {
public:
    string decodeString(string s) {
           string result = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ']') {
            result += s[i];
        } 
        else {
            string temp = "";

            // extract string inside []
            while (!result.empty() && result.back() != '[') {
                temp.push_back(result.back());
                result.pop_back();
            }

            reverse(temp.begin(), temp.end());

            // remove '['
            if (!result.empty()) result.pop_back();

            // extract number
            string num = "";
            while (!result.empty() && isdigit(result.back())) {
                num.push_back(result.back());
                result.pop_back();
            }

            reverse(num.begin(), num.end());

            int repeat = stoi(num);

            while (repeat--) {
                result += temp;
            }
        }
    }

    return result;
} 
    
};