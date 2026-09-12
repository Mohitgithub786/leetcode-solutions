class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        // Map bnao
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;

        vector<int> ans;

        // nums1 traverse
        for(int x : nums1) {
            mp1[x] = 1;
        }

        // nums2 traverse
        for(int x : nums2) {
            mp2[x] = 1;
        }

        // Common elements add karo
        for(auto x : mp1) {
            if(mp1[x.first] && mp2[x.first]) {
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};