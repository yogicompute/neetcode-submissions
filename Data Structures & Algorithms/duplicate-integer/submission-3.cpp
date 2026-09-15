// #include <bits/stdc++.h>
// using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int num: nums){
            if(st.count(num)){
                cout<<st.count(num);
                return true;
            }
            st.insert(num);
        }
        return false;
    }
};
