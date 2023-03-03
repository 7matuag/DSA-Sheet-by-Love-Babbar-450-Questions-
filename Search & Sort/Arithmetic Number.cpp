class Solution{
public:
    int inSequence(int A, int B, int C){
        // code here
        if((B>A && C<0) || (B<A && C>0)){
            return 0;
        } 
        if(C==0){
            return A==B;
        }
        if((B-A)%C==0){
            return 1; 
        }
        return 0;
    }
};
