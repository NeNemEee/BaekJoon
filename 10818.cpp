#include<iostream>
int*mergeSort(int*_arr,int size);
int*merge(int*_arr, int size);

int main(){
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	int arrSize;
	std::cin>>arrSize;
	int*arr = new int[arrSize];
	for(int i=0; i<arrSize; i++){
		std::cin>>arr[i];
	}
	
	arr = mergeSort(arr, arrSize);
	
	std::cout<<arr[0]<<' '<<arr[arrSize - 1];
	
	delete arr;
	
	return 0;
}

int*mergeSort(int*_arr, int size){
	if(size == 1){
		return _arr;
	}
	int half = size/2;
	
	int*halfArr = new int[half];
	for(int i=0; i<half; i++){
		halfArr[i] = _arr[i];
	}
	
	int*otherArr = new int[size-half];
	for(int i=half; i<size; i++){
		otherArr[i-half] = _arr[i];
	}
	
	halfArr = mergeSort(halfArr, half);
	otherArr = mergeSort(otherArr, (size - half));
	
	int i = 0;
	int j = 0;
	int k =0;
	
	while(k<size){
		if(i<half&&j<(size-half)){
			if(halfArr[i]<otherArr[j]){
				_arr[k] = halfArr[i];
				i++;
			}else{
				_arr[k] = otherArr[j];
				j++;
			}
		}else if(i<half){
			_arr[k]=halfArr[i];
			i++;
		}else if(j<size-half){
			_arr[k]=otherArr[j];
			j++;
		}

		
		k++;
	}
	
	return _arr;
}
