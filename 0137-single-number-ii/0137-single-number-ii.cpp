class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
          if(nums[j] > nums[j+1]) {
            swap(nums[j], nums[j+1]);
          }
       }
     }
        for(int i=0; i<n; i++){
        if ((i == 0 || nums[i] != nums[i-1]) &&
         (i == n-1 || nums[i] != nums[i+1])) {
         ans = nums[i];
         }
       }
      return ans;
    }
};