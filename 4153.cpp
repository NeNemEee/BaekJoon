#include<iostream>
#include<cmath>
#include<vector>
#include<tuple>

using namespace std;
int main(){
	vector<tuple<int, int, int>> v;
	int a[5];
	int max;
	while(1){
		scanf("%d %d %d", &a[0], &a[1], &a[2]);
		if(a[0]==0&&a[1]==0&&a[2]==0){
			break;
		}
		max = 0;
		for(int j=0; j<3; j++){
			if(a[max]<a[j]){
				max = j;
			}
		}
		if(max!=2){
			int temp = a[2];
			a[2] = a[max];
			a[max] = temp;
		}
		
		v.push_back(make_tuple(a[0],a[1],a[2]));
	}
	
	for(int i=0; i<v.size(); i++){
		if(pow(get<0>(v[i]), 2) + pow(get<1>(v[i]), 2) == pow(get<2>(v[i]), 2)){
			printf("right");
		}else{
			printf("wrong");
		}
		
		if(i!=v.size()-1){
			printf("\n");
		}
	}
	
	return 0;
}
