#include<iostream>
#include<utility>

int def(int*arr, int p);

int main(){
	int input;
	int max=0;
	std::pair<int, int> ans;
	int check = 0;
	scanf("%d", &input);
	int*test = new int[input+1];
	for(int i=0; i<input; i++){
		scanf("%d", &test[i]);
		scanf("%*c");
		if(max<test[i]){
			max=test[i];
		}
	}
	int*arr = new int[max+1];
	for(int i=0; i<=max; i++){
		if(i==0||i==1){
			arr[i]=0;
		}
		arr[i] = 1;
	}
	def(arr, max);
	for(int i=0; i<input; i++){
		check = 0;
		for(int j=test[i]/2; j>=2; j--){
			if(arr[j]==1){
				for(int k=test[i]/2; k<test[i]; k++){
					if(arr[k]==1&&(j+k)==test[i]){
						ans = std::make_pair(j, k);
						check = 1;
						break;
					}
				}
				
				if(check==1){
					printf("%d %d", ans.first, ans.second);
					break;
				}
				
			}
		}
		
		if(i!=input-1){
			printf("\n");
		}
	}
	
	delete test, arr;
	return 0;
	
	
}

int def(int*arr, int p){
	int k=1;
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
