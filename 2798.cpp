#include<iostream>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int*arr = new int[n+5];
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	int sum = 0;
	int com = m;
	
	for(int i=0; i<n-2; i++){
		for(int j=i+1; j<n-1; j++){
			for(int k=j+1; k<n; k++){
				if(com>m-(arr[i]+arr[j]+arr[k])&&arr[i]+arr[j]+arr[k]<=m){
					com = m-(arr[i]+arr[j]+arr[k]);
					sum = arr[i]+arr[j]+arr[k];
				}
			}
		}
	}
	 
	printf("%d", sum);
	delete arr;
	return 0;
}
