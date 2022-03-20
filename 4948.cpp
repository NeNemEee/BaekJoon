#include<iostream>
#include<vector>
int def(int*arr, int p);

int main(){
	int max=0;
	int input;
	int sum;
	int*arr;
	std::vector<int> test;
	
	while(1){
		scanf("%d", &input);
		if(input!=0){
			test.push_back(input);
			if(max<input){
				max = input;
			}
		}else{
			break;
		}
	}
	arr = new int[max*2 + 1];
	for(int  i=0; i<max*2; i++){
		arr[i] = 1;
	}
	def(arr, max*2);
	
	for(int i=0; i<test.size(); i++){
		sum = 0;
		for(int j=test[i]+1; j<=test[i]*2; j++){
			if(arr[j]==1){
				sum = sum + 1;
			}
		}
		printf("%d", sum);
		if(i!=test.size()-1){
			printf("\n");
		}
	}
	
	delete arr;
	
	
	return 0;
}

int def(int*arr, int p){
	int k=1;
	arr[0] = 0;
	arr[1] = 0;
	for(int i=2; i<=p; i++){
		if(i==2){
			k=2;	
			while(i*k<=p){
				arr[i*k]=0;
				k++;
			}
		}else{
			if(arr[i]==1){
				k=2;
				while(i*k<=p){
					arr[i*k]=0;
					k++;
				}
			}
		}
	}
	
	return 0;
}
