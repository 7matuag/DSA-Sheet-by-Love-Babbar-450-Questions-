Node *flatten(Node *root)
{
   // Your code here
   int arr[1001] = {0};
   Node *curr = root;
   while(curr){
       Node *itr = curr;
       while(itr){
           arr[itr -> data]++;
           itr = itr -> bottom;
       }
       curr = curr -> next;
   }
   Node *temp ,*ans ;
   bool f = 1;
   for (int i = 1; i <= 1000; i++){
       int j = 0;
       while(j < arr[i]){
           if(f){
               temp = new Node(i);
               ans = temp;
               f = 0;
           }
           else{
               temp -> bottom = new Node(i);
               temp = temp -> bottom;
           }
           j++;
       }
   }
   return ans;
}
