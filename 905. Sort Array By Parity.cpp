class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int len=nums.size();

        vector<int> res(len);

        for(int i=0,j=0,k=len-1;i<len;i++ ){
            if(nums[i]%2==0){
                res[j]=nums[i];
                j++;
            }
            else{
                res[k]=nums[i];
                k--;
            }
        }

        return res;


        
    }
};
