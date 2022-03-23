#include<iostream>
#include<string>
#include<utility>

using namespace std;

class stack{
	private:
		int n;
		int*arr;
	public:
		stack();
		~stack();
		int push(int _n);
		int pop();
		int size();
		int empty();
		int top();
};

int main(){
	int input;
	cin>>input;
	
	pair<string, int>*arr = new pair<string, int>[input];
	for(int i=0; i<input; i++){
		string tmp;
		int itmp;
		cin>>tmp;
		
		if(tmp=="push"){
			cin>>itmp;
			arr[i] = make_pair(tmp, itmp);
		}else{
			arr[i] = make_pair(tmp, 0);
		}
	}
	
	stack*s = new stack();
	for(int i=0; i<input; i++){
		if(arr[i].first=="push"){
			s->push(arr[i].second);
		}else if(arr[i].first=="pop"){
			printf("%d\n", s->pop());
		}else if(arr[i].first=="size"){
			printf("%d\n", s->size());
		}else if(arr[i].first=="empty"){
			printf("%d\n", s->empty());
		}else if(arr[i].first=="top"){
			printf("%d\n", s->top());
		}else{
		}
	}
	
	delete s;
	delete[] arr;
	return 0;
}

stack::stack(){
	this->n=0;
}

stack::~stack(){
	delete[] this->arr;
}

int stack::push(int _n){
	int*tmp = new int[n + 1];
	
	for(int i=0; i<n; i++){
		tmp[i] = arr[i];
	}
	
	tmp[n] = _n;
	
	delete[] arr;
	arr = new int[n+1];
	
	for(int i=0; i<n+1; i++){
		arr[i] = tmp[i];
	}
	
	n++;
	
	return 0;
}

int stack::pop(){
	if(n==0){
		return -1;
	}
	int print = arr[n - 1];
	int*tmp = new int[n-1];
	
	for(int i=0; i<n-1; i++){
		tmp[i] = arr[i];
	}
	
	
	delete[] arr;
	arr = new int[n-1];
	
	for(int i=0; i<n-1; i++){
		arr[i] = tmp[i];
	}
	
	n--;
	
	return print;
}

int stack::size(){
	return n;
}

int stack::empty(){
	if(n!=0){
		return 0;
	}else{
		return 1;
	}
}

int stack::top(){
	if(n==0){
		return -1;
	}
	
	return arr[n-1];
}

