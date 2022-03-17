#include<iostream>

int*selfNumber(int*arr, int n);

int main(){
	int*arr = new int[10003];
	for(int i=0; i<10000; i++){
		arr[i]=0;
	}
	
	for(int i=1; i<=10000; i++){
		if(arr[i-1]!=1){
			selfNumber(arr, i);
		}
	}
	
	for(int i=0; i<10000; i++){
		if(arr[i]==0){
			std::cout<<i+1<<std::endl;
		}
	}
	delete arr;
	return 0;
}

int*selfNumber(int*arr, int n){
	if(n>10000){
		return arr;
	}
	
	n = n + n/10000 + (n/1000 - n/10000 * 10) + (n/100 - n/1000 *10) + (n/10 - n/100 * 10) + n%10;
	if(arr[n-1]==1){
		return arr;
	}else{
		arr[n-1] = 1;
		selfNumber(arr, n);
	}
	
	return arr;
}
