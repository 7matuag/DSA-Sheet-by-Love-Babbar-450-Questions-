int minimumCoins(int v) {
    // Write your code here.
    int count=0;
    vector<int> coins = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    for(int i = 0; i < 9; i++){
        while(v >= coins[i]){
            count++;
            v -= coins[i];
        }
    }
    return count;
}
