class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        //Approach 1:Sorting and Comparing
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==nums[i+1]){
        //         return nums[i];
        //     }
        // }
        // return 0;

        //Approach 2 :Visited Solution

        // for(int i=0;i<nums.size();i++){

        //     //already visited?
        //     int index=abs(nums[i]);
        //     if(nums[index]<0){
        //         return index;
        //     }

        //     //visited mark
        //     nums[index]*=-1;
        // }
        // return 0;

        //Approach 3 :Positioning Method
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
    }
};