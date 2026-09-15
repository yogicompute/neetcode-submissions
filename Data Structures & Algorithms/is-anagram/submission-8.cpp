class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> charCnt;

        for(char ch: s){
            charCnt[ch]++;
        }

        for(char ch: t){
            charCnt[ch]--;
        }

        for(auto it: charCnt){
            if(it.second != 0) return false;
        }
        return true;
    }
};
