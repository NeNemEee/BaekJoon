#include<iostream>

int main(){
	int input;
	scanf("%d", &input);
	int*arr = new int[input+1];
	for(int i=0; i<input; i++){
		scanf("%d", &arr[i]);
	}
	
	
	for(int i=0; i<input-1; i++){
		int min = arr[i];
		int fivot = i;
		for(int j=i; j<input; j++){
			if(min>arr[j]){
				fivot = j;
				min = arr[fivot];
			}
		}
		
		if(fivot!=i){
			int tmp = arr[fivot];
			arr[fivot] = arr[i];
			arr[i] = tmp;
		}
	}
	
	for(int i=0; i<input; i++){
		printf("%d", arr[i]);
		if(i!=input-1){
			printf("\n");
		}
	}
	
	delete arr;
	
	return 0;
}
