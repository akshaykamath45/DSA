class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());-->Not to be used

        //Counting Method
        // int cnt0=0,cnt1=0,cnt2=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         cnt0++;
        //     }
        //     else if(nums[i]==1){
        //         cnt1++;
        //     }
        //     else{
        //         cnt2++;
        //     }
        // }
        // //spread
        // int i=0;
        // while(cnt0--){
        //     nums[i]=0;
        //     i++;
        // }
        // while(cnt1--){
        //     nums[i]=1;
        //     i++;
        // }
        // while(cnt2--){
        //     nums[i]=2;
        //     i++;
        // }

        //In Place Solution-->3 Pointer Approach

        int low=0;//for 0's
        int medium=0;//for 1's -->Important,we move this based on the conditions
        int high=nums.size()-1;//for 2''s

        while(medium<=high){
            if(nums[medium]==0){
                swap(nums[low],nums[medium]);
                low++;
                medium++;
            }
            else if(nums[medium]==1){
                medium++;
            }
            else{
                swap(nums[high],nums[medium]);
                high--;
            }
        }
    }
};

// DRY RUN
// [2,0,2,1,1,0]
// l=0-->2
// m=0-->2
// h=5-->0
// swap(nums[l],nums[h--])
// h--;

// [0,0,2,1,1,2]
// l=0;-->0
// m=0;-->0
// h=4;-->1
// swap(nums[l],nums[m]);
// l++;
// m++;

// No change for 1 st 2 Elements

// [0,0,2,1,1,2];
// l=2;-->2
// m=2;-->2
// h=4;-->1
// swap(nums[l],nums[h--])
// h--;

// [0,0,1,1,2,2]

// Got the required result.