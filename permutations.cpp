class Solution {
    void solve(vector<int> &nums,vector<vector<int>> &v,vector<int> &ds,int freq[])
    {
        if(nums.size()==ds.size())
        {
            v.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(freq[i]==0)
            {
            ds.push_back(nums[i]);
            freq[i]=1;
            
            solve(nums,v,ds,freq);
                freq[i]=0;
            ds.pop_back();
            }
        
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> x;
        vector<int> ds;
        int n=nums.size();
        int freq[n];
        memset(freq,0,sizeof(freq));
        solve(nums,x,ds,freq);
        return x;
        
    }
};
