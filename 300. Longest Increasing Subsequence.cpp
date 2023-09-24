class Solution {
public:

    int mem[2501];
    int dp(int i, vector<int>& nums){
            int n=nums.size();
            if(mem[i]!=-1) return mem[i];

            int ans=0;

            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>nums[i]){
                    ans=max(ans,dp(j,nums));
                }
            }

            mem[i]=ans+1;
            return mem[i];

        }
    
    int lengthOfLIS(vector<int>& nums) {

            int n=nums.size();
            
            
        
            int ans=0;
            for(int i=0;i<nums.size();i++) mem[i]=-1;

            for(int i=0;i<nums.size();i++){
                ans=max(ans,dp(i,nums));
            }

        

        return ans;

        
    }

  
};
