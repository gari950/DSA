class Solution {
public:
int trap(vector<int>& height) {
//TIME-COMPLEXITY = O(N) + O(N) + O(N)       two loops + one reverse function
//SPACE-COMPLEXITY = O(2N)     using two vectors
vector <int> maxL;
vector <int> maxR;
int sum = 0, n = height.size() - 1;
maxL.push_back(height[0]);
maxR.push_back(height[n]);
for(int i = 1; i<n+1; i++){
maxL.push_back(max(maxL[i-1], height[i]));
maxR.push_back(max(maxR[i-1], height[n-i]));
}
reverse(maxR.begin(), maxR.end());
for(int i = 0; i<n+1; i++){
sum += min(maxL[i], maxR[i]) - height[i];
}
return sum;
}
};
​
class Solution {
public:
int trap(vector<int>& arr) {