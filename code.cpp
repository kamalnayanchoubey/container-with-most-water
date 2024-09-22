class Solution {
public:
    int maxArea(vector<int>& height) {//O(n)
    int maxwater =0; //ans
    int lp=0, rp=height.size()-1;

    while(lp<rp){

        int w = rp-lp;
        int ht = min(height[lp], height[rp]);
        int currwater = w*ht;

        maxwater = max(maxwater, currwater);

        height[lp]<height[rp] ? lp++ : rp--;
    }
    return maxwater;
        
    }
};