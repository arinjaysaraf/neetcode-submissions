class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int, int> m;

        for (auto i: nums) m[i]++;

        vector<pair<int, int>> p(m.begin(),m.end());

        sort(p.begin(), p.end(), [](pair <int,int> a, pair<int, int> b){
            return a.second > b.second ;
        });

        for (int i=0;i < k;i++) {
            ans.push_back(p[i].first);
        }
        return ans;
    }
};
