class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        // for(int i = 0;i<s.length();i++){
        //     bool flag = false;
        //     for(int j = 0;j<t.length();j++){
        //         if(s[i] == t[j]){
        //             flag = true;
        //             t[j] = '-';
        //             break;
        //         }
        //     }
        //     if(!flag) return false;
        // }
        // return true;

        vector<int> freq(26, 0);
        for(int i = 0;i<s.length();i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(int it:freq){
            if(it != 0) return false;
        }
        return true;
    }
};
