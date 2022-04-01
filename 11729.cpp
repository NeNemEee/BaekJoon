#include<iostream>
#include<cmath>

using namespace std;

void hanoi(int b, int a, int n);

int main(){
	int input;
	cin>>input;
	if(input%2==1){
		hanoi(1, 3, input);
	}else{
		hanoi(1, 2, input);
	}
	
	
	return 0;
}

void hanoi(){
	if(n==0){
		return;
	}
	cout<<b<<' '<<a<<endl;
	n-=1;
	
	
}
