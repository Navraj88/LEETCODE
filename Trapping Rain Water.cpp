class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l[n],r[n];
        l[0]=height[0];
        r[n-1]=height[n-1];
        for(int i=1;i<n-1;i++){
            l[i]=max(height[i],l[i-1]);
        }
        for(int j=n-2;j>=0;j--){
            r[j]=max(r[j+1],height[j]);
        }
        long long int ans=0;
        for(int i=1;i<n-1;i++){
            int n=min(l[i],r[i]);
            n=n-height[i];
            ans+=n;
        }
        return ans;
    }
};
