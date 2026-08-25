class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        vector <int> ans(2);
        
        for(int i = 0; i < n.size(); i++){
            for(int j = i +1; j < n.size(); j++){
                if(n[i] + n[j] == target){
                    ans[0] = i;
                    ans[1] = j;
                    return ans;
                } 
            }
        }
    return ans;
    }
    
};
