class Solution {
    public:
        int minTimeToVisitAllPoints(vector<vector<int>>& points) {
            int n = points.size();
            int ans = 0;
            for(int i = 1;i<n;i++) {
                ans += max(abs(points[i][0]-points[i-1][0]),abs(points[i][1]-points[i-1][1]));
            }
            return ans;
        }
    
};