class Solution {
  public:
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        // code here
        unordered_map<int, vector<int>> m1, m2;
        for (int i = 0; i < 2 * e; i += 2){
            m1[A[i]].push_back(A[i + 1]);
            m2[B[i]].push_back(B[i + 1]);
        }
        for (int i = 1; i <= 1e5; i++){
            if((m1[i].size() == 0 && m2[i].size() != 0) || (m1[i].size() != 0 && m2[i].size() == 0)){
                return 0;
            }
            reverse(m1[i].begin(), m1[i].end());
            if(m1[i] != m2[i]){
                return 0;
            }
        }
        return 1;
    }
};
