#include <bits/stdc++.h> 
int copyBitsInRange(int a, int b, int x, int y)
{
    // Write your code here.
    long long  n = (1 << (y - x + 1) ) - 1;
    n = n << (x - 1);
    return b | (a & n);
}
