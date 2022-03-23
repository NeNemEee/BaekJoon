#include<iostream>
#include<string>

using namespace std;

int merge(string*arr, int len);
int merges(string*arr, int start, int end);
int swap(string*arr, int i, int j);
int swaps(string*arr, int i, int j);

int main(){
	int input;
	cin>>input;
	
	string*arr = new string[input+5];
	
	for(int i=0; i<input; i++){
		cin>>arr[i];
	}
	
/*	merge(arr, input);
	int idx;
	for(int i=0; i<input-1; i++){
		idx = 1;
		for(int j=i+1; j<input; j++){
			if(arr[i].length()==arr[j].length()){
				idx++;
			}else{
				merges(arr, i, i+idx);
				i= j-1;
				break;
			}
			
			if(j==input-1){
				merges(arr, i, i+idx);
				i=j;
			}
		}
	}
*/
	for(int i=0; i<input-1; i++){
		for(int j=i+1; j<input; j++){
			if(arr[i].length()>arr[j].length()){
				swap(arr, i, j);
			}
		}
	}

	int idx;
	for(int i=0; i<input-1; i++){
		idx = 0;
		if(arr[i].length()==arr[i+1].length()){
			for(int j= i+1; j<input; j++){
				if(arr[i].length()!=arr[j].length()){
					
				}
			}
		}
	}

	for(int i=0; i<input; i++){
		if(arr[i]==arr[i+1]){
			for(int j=i+1; j<input; j++){
				if(arr[i]!=arr[j]){
					cout<<arr[i];
					i = j-1;
					break;
				}
				
				if(j==input-1){
					cout<<arr[i];
					i= j;
				}
			}
		}else{
			cout<<arr[i];
		}
		
		if(i!=input-1){
			cout<<endl;
		}
	}
	delete[] arr;
	return 0;
}

int merge(string*arr, int len){
	if(len<=1){
		return 0;
	}
	
	int half = len/2;
	
	string*arrl = new string[half];
	string*arrr = new string[len-half];
	
	for(int i=0; i<half; i++){
		arrl[i] = arr[i];
	}
	
	for(int i=half; i<len; i++){
		arrr[i-half] = arr[i];
	}
	
	merge(arrl, half);
	merge(arrr, len-half);
	
	int idxl = 0;
	int idxr = 0;
	int idxm = 0;
	
	while(idxm<len){
		if(idxl == half){
			arr[idxm] = arrr[idxr];
			idxr++;
		}else if(idxr == len-half){
			arr[idxm] = arrl[idxl];
			idxl++;
		}else if(arrl[idxl].length()<arrr[idxr].length()){
			arr[idxm] = arrl[idxl];
			idxl++;
		}else{
			arr[idxm] = arrr[idxr];
			idxr++;
		}
		
		idxm++;
	}
	
	return 0;
}

int merges(string*arr, int start, int end){
	if(end-start<=1){
		return 0;
	}
	
	int half = (end-start)/2;
	
	string*arrl = new string[half];
	string*arrr = new string[end-start-half];
	
	for(int i=0; i<half; i++){
		arrl[i] = arr[i+start];
	}
	
	for(int i=0; i<end-start-half; i++){
		arrr[i] = arr[i+start+half];
	}
	
	merges(arrl, 0, half);
	merges(arrr, 0, end-start-half);
	
	int idxl = 0;
	int idxr = 0;
	int idxm = start;
	
	while(idxm<end){
		if(idxl == half){
			arr[idxm] = arrr[idxr];
			idxr++;
		}else if(idxr == end-start-half){
			arr[idxm] = arrl[idxl];
			idxl++;
		}else{
			int idx = 0;
			while(idx<(end-start)){
				if(arrl[idxl][idx]<arrr[idxr][idx]){
					arr[idxm] = arrl[idxl];
					idxl++;
					break;
				}else if(arrl[idxl][idx]>arrr[idxr][idx]){
					arr[idxm] = arrr[idxr];
					idxr++;
					break;
				}else{
					idx++;
				}
			}
			
			if(idx==end-start){
				arr[idxm] = arrl[idxl];
				idxl++;
			}
		}
		
		idxm++;
	}
	
	return 0;
}

int swap(string*arr, int i, int j){
	
}
