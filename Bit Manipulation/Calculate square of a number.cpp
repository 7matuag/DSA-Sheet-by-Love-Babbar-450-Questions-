#include <bits/stdc++.h> 
int calculateSquare(int num)
{
    //    Write your code here.
    num = abs(num);
    int ans = 0;
    int x = num;
    while(x > 0){
        if(x & 1){
            ans += num;
        }
        num = num << 1;
        x = x >> 1;
    }
    return ans;
}
