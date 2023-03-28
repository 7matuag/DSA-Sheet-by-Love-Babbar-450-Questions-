class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int> fact;
        fact.push_back(1);
        for (int i = 2; i <= N; i++){
            int carry = 0;
            for (int j = fact.size() - 1; j >= 0; j--){
                int sum = fact[j] * i + carry;
                fact[j] = sum % 10;
                carry = sum / 10;
            }
            while(carry){
                fact.insert(fact.begin(), carry % 10);
                carry /= 10;
            }
        }
        return fact;
    }
};
