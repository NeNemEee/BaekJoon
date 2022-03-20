#include<iostream>
#include<cmath>

using namespace std;

int def(int*a);

int main(){
	int input;
	scanf("%d", &input);
	int**arr = new int*[input+1];
	for(int i=0; i<input; i++){
		arr[i] = new int[10];
	}
	
	for(int i=0; i<input; i++){
		scanf("%d %d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4], &arr[i][5]);
	}
	
	for(int i=0; i<input; i++){
		printf("%d", def(arr[i]));
		
		if(i!=input-1){
			printf("\n");
		}
	}
	
	for(int i=0; i<input; i++){
		delete arr[i];
	}
	delete arr;
	return 0;
}

int def(int*a){
	int x = pow(a[0] - a[3], 2);
	int y = pow(a[1] - a[4], 2);
	int rp = a[2] + a[5];
	int rm = a[2] - a[5];
	if(rm<0){
		rm = rm * (-1);
	}
	if(x==0&&y==0&&rm==0){
		return -1;
	}else if(x+y>pow(rp,2)){
		return 0;
	}else if(x+y==pow(rp,2)){
		return 1;
	}else if(x+y<pow(rp,2)&&x+y>pow(rm,2)){
		return 2;
	}else if(x+y==pow(rm,2)){
		return 1;
	}else{
		return 0;
	}
}
