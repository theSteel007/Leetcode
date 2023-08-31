class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        int n=a.size();

        for(int i=0;i<n;i++){
            a[i]=pow(a[i],2);

        }
        sort(a.begin(),a.end());
        return a;
    }
};