int mini;
void push(stack<int>& s, int a){
	// Your code goes here
	if(s.empty()){
	    s.push(a);
	    mini = a;
	}
	else if(a <= mini){
	    s.push(2*a - mini);
	    mini = a;
	}
	else{
	    s.push(a);
	}
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	return s.size() == n;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.empty();
}

int pop(stack<int>& s){
	// Your code goes here
	int temp = s.top();
	s.pop();
	if(temp <= mini){
	    temp = mini;
	    mini = 2*temp - mini;
	}
	return temp;
}

int getMin(stack<int>& s){
	// Your code goes here
	return mini;
}
