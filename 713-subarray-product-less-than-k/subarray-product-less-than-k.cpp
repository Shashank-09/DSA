class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1){
            return 0;
        }
        int  count = 0;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            int product = 1;
            for(int j = i; j >= 0; j--){
                product *= nums[j];
            
            if(product < k){
                count++;
            }else{
                break;
            }
        }
    }
      return count;    
    }

      

};