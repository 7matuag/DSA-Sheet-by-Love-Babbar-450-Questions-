int search(int arr[], int n, int x, int k)
{
    // Complete the function	
    int i=0;
    while(i<n){
        if(arr[i]==x){
            return i;
        }
        else{
            i+=max(1,abs(arr[i]-x)/k);
        }
    }
    return -1;
} 
