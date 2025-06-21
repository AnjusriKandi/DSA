class Solution {
public:
    int rcnt=0;

    void merge(vector<int>&nums,int low,int mid,int high){
        int i=low,j=mid+1;
        vector<int>temp;
        while(i<=mid && j<=high){
            if(nums[i]<=nums[j])
                temp.push_back(nums[i++]);
            else
                temp.push_back(nums[j++]);
        }

        while(i<=mid)
            temp.push_back(nums[i++]);
        
        while(j<=high)
            temp.push_back(nums[j++]);

        for(int k=0;k<temp.size();k++)
            nums[low+k]=temp[k];
    }

    void cnt_pairs(vector<int>&nums,int low,int mid,int high){
        int i=low,j=mid+1;

        while(i<=mid){
            while(j<=high && nums[i]>(long long)2*nums[j])
                j++;

            rcnt+=(j-(mid+1));
            i++;
        }

    }
    void merge_sort(vector<int>&nums,int low,int high){
        if(low>=high)
            return;
        int mid=(low+high)/2;
        merge_sort(nums,low,mid);
        merge_sort(nums,mid+1,high);
        cnt_pairs(nums,low,mid,high);
        merge(nums,low,mid,high);
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        merge_sort(nums,0,n-1);
        return rcnt;
    }
};
