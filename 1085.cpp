#include<iostream>

int main(){
	int arr[6];
	for(int i=0; i<4; i++){
		scanf("%d", &arr[i]);
	}
	if((arr[3]-arr[1]<arr[1])){
		arr[1] = arr[3]-arr[1];
	}
	if(arr[2]-arr[0]<arr[0]){
		arr[0] = arr[2] - arr[0];
	}
	
	if(arr[0]<arr[1]){
		printf("%d", arr[0]);
	}else{
		printf("%d", arr[1]);
	}
	
	return 0;
	
}
