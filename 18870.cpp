#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int input;
	cin>>input;
	int*arr = new int[input];
	int*tmp = new int[input];
	int*tmpp = new int[input];
	int*ans = new int[input];
	
	for(int i=0; i<input; i++){
		cin>>arr[i];
		tmp[i] = arr[i];
	}
	
	sort(tmp, tmp+input);
	
	int max=0;
	for(int i=0; i<input-1; i++){
		tmpp[i] = max;
		for(int j=i+1; j<input; j++){
			if(tmp[i]==tmp[j]){
				tmpp[j] = max;
			}else{
				max+=1;
				tmpp[j] = max;
				i=j;
			}
		}
		
		
	}
	
	for(int i=0; i<input; i++){
		for(int j=0; j<input; j++){
			if(arr[i]==tmp[j]){
				ans[i] = tmpp[j];
				break;
			}
		}
	}
	
	for(int i=0; i<input; i++){
		cout<<ans[i];
		if(i!=input-1){
			cout<<' ';
		}
	}
	return 0;
}
