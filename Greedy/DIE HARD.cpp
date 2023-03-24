#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,a;
        cin>>h>>a;
        bool f = 1;
        int count = -1;
        while(h > 0 && a > 0){
            if(f){
                h += 3;
                a += 2;
                f = 0; 
            }
            else{
                f = 1;
                if(h - 20 > 0 && a <= 10){
                    h -= 20;
                    a += 5;
                }
                else if( h - 5 > 0 && a - 10 >0){
                    h -= 5;
                    a -= 10;
                }
                else {
                    a = 0;
                    h = 0;
                }
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
    



