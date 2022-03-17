#include<iostream>
int score = 0;
int hanNumber(int n);

int main(){
	int input;
	std::cin>>input;
	hanNumber(input);
	std::cout<<score;
	return 0;
}

int hanNumber(int n){
	if(n==1){
		score = score + 1;
		return 0;
	}
	if(n>=2&&n<100){
		score = score + 1;
		hanNumber(n-1);
	}else if(n==1000){
		hanNumber(999);
	}else{
		int a,b;
		a = n/100 - (n/10 - n/100 * 10);
		b = (n/10 - n/100 * 10) - n%10;
		if(a==b){
			score = score + 1;
		}
		
		hanNumber(n-1);
	}
	
	return 0;
}
