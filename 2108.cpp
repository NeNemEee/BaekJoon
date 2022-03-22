#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<utility>

using namespace std;

int main(){
	int input;
	cin>>input;
	int*arr = new int[input+1];
	for(int i=0; i<input; i++){
		cin>>arr[i];
	}
	
	sort(arr, arr+input);

	int sum=0;
	for(int i=0; i<input; i++){
		sum = sum + arr[i];
	}
	
	float res = (float)sum/(float)input;
	sum = floor(res + 0.5);
	cout<<sum<<endl;//»ê¼úÆò±Õ 
	
	cout<<arr[input/2]<<endl;//Áß¾Ó°ª
	
	 
	vector<pair<int,int>> fivot;
	int idx = 1;
	for(int i=0; i<input-1; i++){
		if(arr[i]!=arr[i+1]){
			fivot.push_back(make_pair(i, idx));
			idx=1;
		}else{
			idx++;
		}
		
		if(i==input-2){
			fivot.push_back(make_pair(i, idx));
		}
	}
	
	int max=0;
	for(int i=0; i<fivot.size(); i++){
		if(fivot[max].second<fivot[i].second){
			max = i;
		}
	}
	
	int count = 0;
	for(int i=0; i<fivot.size(); i++){
		if(fivot[max].second == fivot[i].second){
			if(count==0){
				count = 1;
			}else{
				max = i;
				break;
			}
		}
	}
	
	if(fivot.size()==0){
		cout<<arr[0]<<endl; 
	}else{
		cout<<arr[fivot[max].first]<<endl;//ÃÖºó°ª 		
	}

	 
	
	cout<<arr[input-1] - arr[0];//¹üÀ§
	 
	delete[] arr;
	return 0;
}
