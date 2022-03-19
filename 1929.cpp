#include<iostream>

int def(int*arr, int p);

int main(){

	int m,n;
	scanf("%d %d", &m, &n);
	int*arr = new int[n+1];
	for(int i=0; i<n+1; i++){
		arr[i]=1;
	}
	def(arr, n);
	for(int i=m; i<=n; i++){
		if(arr[i]==1){
			printf("%d\n", i);
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
