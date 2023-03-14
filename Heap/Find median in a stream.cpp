class Solution
{
    priority_queue<int>pq1;
    priority_queue<int,vector<int>,greater<int>>pq2;
    public:
    //Function to insert heap.
    void insertHeap(int &x)
    {
        if(pq1.empty() || pq1.top()>x){
            pq1.push(x);
        }
        else{
            pq2.push(x);
        }
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        if(pq1.size()>pq2.size()+1){
            pq2.push(pq1.top());
            pq1.pop();
        }
        else if(pq2.size()>pq1.size()){
            pq1.push(pq2.top());
            pq2.pop();
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(pq1.size()==pq2.size()){
            return (double)((pq1.top()+pq2.top())/2.0);
        }
        return (double)pq1.top();
    }
};
