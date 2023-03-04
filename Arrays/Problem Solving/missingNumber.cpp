// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         for (int i = 0; i < nums.size(); i++) {
//             int index = abs(nums[i]);
//             if (index < nums.size() && nums[index] > 0) {
//                 nums[index] *= -1;
//             }
//         }
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] > 0) {
//                 return i;
//             }
//         }
//         return nums.size();
//     }
// };
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n = nums.size();
        // int sum = n*(n+1)/2;
        // for (int i = 0; i < n; i++) {
        //     sum -= nums[i];
        // }
        // return sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int index = abs(nums[i]);
            if(nums[index]!=nums[i]){
                return i;
            }
        }
        return 0;
    }
};