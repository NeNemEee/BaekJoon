#include<iostream>

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
		int sum();

};

int main(){
	int input;
	scanf("%d", &input);
	
	int*arr = new int[input+4];
	for(int i=0; i<input; i++){
		scanf("%d", &arr[i]);
	}
	
	stack*s = new stack();
	for(int i=0; i<input; i++){
		if(arr[i]!=0){
			s->push(arr[i]);
		}else{
			s->pop();
		}
		printf("%d\n", i);
	}
	
	printf("%d", s->sum());
	
	delete s;
	delete[] arr;
	return 0;
}

stack::stack(){
	this->n=0;
	arr = new int[2];
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
	if(n==1){
		delete[] arr;
		n=0;
		return 0;
	}
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
	
	return 0;
}

int stack::sum(){
	int sum = 0;
	for(int i=0; i<n; i++){
		sum = sum + arr[i];
	}
	
	return sum;
}


