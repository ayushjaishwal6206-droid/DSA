#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> v = {0,0,1,0,1,1,0,0,1};
    int n = v.size();
    int zero = 0;
    int ones = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 0){
            zero++;
        }
        else{
            ones++;
        }
    }
    for(int i = 0; i < zero; i++){
        v[i] = 0;
    }
    for(int i = zero; i < n; i++){
        v[i] = 1;
    }
    for(int ele : v){
        cout<<ele<<" ";
    }
}
