#include<iostream>
#include<cmath>

using namespace std;

int hanoi(int b, int r, int n, int t);

int main(){
	int input;
	scanf("%d", &input);
	printf("%d\n", pow(2, n)-1)
	if(n%2==1){
		hanori(3, 1, pow(2, n)-1);
	}else{
		hanoi(2, 1, pow(2, n)-1);
	}
	return 0;
}

int hanoi(int b, int r, int n, int t){
	if(n==0){
		return 0;
	}
	static int k;
	printf("%d %d",r,b);
	if(n!=1){
		printf("\n");
	}
	
	t++;
}
