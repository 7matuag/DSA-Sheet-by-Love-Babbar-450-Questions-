int maxAbsSum(vector<int> &arr, int n) 
{
    int sum = 0;
    sort(arr.begin(), arr.end());
    int i = 0, j = n - 1;
    while(i < j ){
        sum += (abs(arr[j] - arr[i]) + abs(arr[j] - arr[i + 1]));
        i++;
        j--;
    }
    return ( sum + arr[i] - arr[0]);
}
