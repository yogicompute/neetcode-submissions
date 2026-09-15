class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> mpp;

        for(auto & str: strs){
            vector<int> count(26, 0);

            for(char ch: str){
                count[ch-'a']++;
            }
            string key = "";
            for(int i = 0;i<26;i++){
                if(count[i] != 0){
                    key += string(count[i], 'a'+i);
                }
            }
            mpp[key].push_back(str);
        }
        for(auto it: mpp){
            res.push_back(it.second);
        }
        return res;
    }
};
