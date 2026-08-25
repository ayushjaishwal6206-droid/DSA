class Solution {
public:
    void rotate(vector <int> &v , int i, int j){
        
        while(i < j){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& v, int k) {
        int n = v.size();
        k = k % n;

        rotate(v, 0,n-1);
        rotate(v, 0,k-1);
        rotate(v, k, n-1);
    }
};
