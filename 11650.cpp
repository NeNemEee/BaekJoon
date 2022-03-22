#include<iostream>
#include<utility>

using namespace std;

int swap(int*a, int*b, int i, int j);

int main(){
	int input;
	scanf("%d", &input);
	
	int*arrx = new int[input+1];
	int*arry = new int[input+1];
	
	for(int i=0; i<input; i++){
		scanf("%d %d", &arrx[i], &arry[i]);
	}
	
	for(int i=0; i<input-1; i++){
		for(int j=i+1; j<input; j++){
			if(arrx[i]>arrx[j]){
				swap(arrx, arry, i, j);
			}
		}
	}
	
	for(int i=0; i<input-1; i++){
		if(arrx[i]==arrx[i+1]){
			int tmp = i;
			
			while(1){
				if(arrx[tmp]!=arrx[i]){
					break;
				}else if(tmp==input-1){
					break;
				}else{
					tmp++;
				}
			}
			
			for(int j=i; j<tmp; j++){
				for(int k=j+1; k<=tmp ; k++){
					if(arry[j]>arry[k]){
						swap(arrx, arry, j, k);
					}
				}
			}
			
		}
	}
	
	
	
	for(int i=0; i<input; i++){
		printf("%d %d\n", arrx[i], arry[i]);
	}
		
	delete[] arrx, arry;
	return 0;
}

int swap(int*a, int*b, int i, int j){
	int tmpx = a[i];
	int tmpy = b[i];
	a[i] = a[j];
	b[i] = b[j];
	a[j] = tmpx;
	b[j] = tmpy;
	
	return 0;
}
