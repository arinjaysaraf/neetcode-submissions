class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res={};
        vector<int> pre;
        vector<int> post;
        
        int n = nums.size();
        int pre_sum = 1;
        for (int i=0;i<n;i++){
            pre_sum*=nums[i];
            pre.push_back(pre_sum);
        }
        int post_sum = 1;
        for (int i=n-1;i>=0;i--){
            post_sum*=nums[i];
            post.push_back(post_sum);
        }
        reverse(post.begin(),post.end());

        for(int i=0; i<n; i++){
            if(i-1 < 0){
                res.push_back(1*post[i+1]);
            }
            else if(i+1 == n){
                res.push_back(pre[i-1]*1);
            }
            else{
            res.push_back(pre[i-1]*post[i+1]);
            }
        }
        return res;
    }
};
