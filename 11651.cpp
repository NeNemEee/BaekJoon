#include<iostream>

using namespace std;

int mergeSort(int**arr, int i, int j, int idx);

int main(){
	int input;
	scanf("%d", &input);
	
	int**arr = new int*[input];
	for(int i=0; i<input; i++){
		arr[i] = new int[2];
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	mergeSort(arr, 0, input, 1);
	
	int idx = 1;
	for(int i=0; i<input-1; i++){
		int j=i+1;
		while(j<input){
			if(arr[i][1]==arr[j][1]){
				idx++;
				j++;
			}else{
				break;
			}
		}
		mergeSort(arr,i, i+idx, 0);
		i=j-1;
		idx=1;
	}
	
	for(int i=0; i<input; i++){
		printf("%d %d\n", arr[i][0], arr[i][1]);
	}
	
	for(int i=0; i<input; i++){
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}


int mergeSort(int**arr, int i, int j, int idx){

	if(j-i<=1){
		return 0;
	}
	int half = (j-i)/2;

	int**arrl = new int*[half];
	for(int k=0; k<half; k++){
		arrl[k] = new int[2];
		arrl[k] = arr[k+i];
	}

	int**arrr = new int*[(j-i)-half];
	for(int k=0; k<(j-i)-half; k++){
		arrr[k] = new int[2];
		arrr[k] = arr[k+i+half];
	}
	


	mergeSort(arrl, 0, half, idx);
	mergeSort(arrr, 0, (j-i)-half, idx);
	
	
	int idxl = 0;
	int idxr = 0;
	int idxm = i;

	while(idxm<j){
		if(idx==0){
			if(idxl==half){
				arr[idxm] = arrr[idxr];
				idxr++;
			}else if(idxr==(j-i-half)){
				arr[idxm] = arrl[idxl];
				idxl++;
			}else if(arrl[idxl][0]<arrr[idxr][0]){
				arr[idxm] = arrl[idxl];
				idxl++;
			}else{
				arr[idxm] = arrr[idxr];
				idxr++;
			}
		}else{
			if(idxl==half){
				arr[idxm] = arrr[idxr];
				idxr++;
			}else if(idxr==(j-i-half)){
				arr[idxm] = arrl[idxl];
				idxl++;
			}else if(arrl[idxl][1]<arrr[idxr][1]){
				arr[idxm] = arrl[idxl];
				idxl++;
			}else{
				arr[idxm] = arrr[idxr];
				idxr++;
			}
		}
		idxm++;
	}
	
	
	return 0;	
}
