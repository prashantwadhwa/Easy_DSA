

#include <bits/stdc++.h>
using namespace std;




class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {

        
        int sum1 = n*(n+1)/2;
        int sum2 = 0;
        
        for(int i=0;i<n-1;i++){
           sum2 += array[i];     
        }
        int ans = sum1 - sum2;
        return ans;
        
    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
