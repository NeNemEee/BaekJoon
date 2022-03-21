#include<iostream>
#include<utility>
#include<vector>

using namespace std;

int main(){
	int input;
	scanf("%d", &input);
	vector<pair<int, int>> v;
	int a,b;
	for(int i=0; i<input; i++){
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a, b));
	}
	int k;
	for(int i=0; i<v.size(); i++){
		k=1;
		for(int j=0; j<v.size(); j++){
			if(v[i].first<v[j].first&& v[i].second<v[j].second && i!=j){
				k++;
			}
			
		}
		printf("%d", k);
		if(i!=v.size()-1){
			printf(" ");
		}
	}
	
	return 0;
}
