#include<iostream>
#include<string>

using namespace std;

class Member{
	private:
		int age;
		string name;
		int order;
	public:
		Member(){
			age = 0;
			name = "";
			order = 0;
		};
		
		Member(int a, string b, int c){
			age = a;
			name = b;
			order = c;
		};
		~Member(){
		};
		
		int getAge(){
			return age;
		};
		string getName(){
			return name;
		};
		int getOrder(){
			return order;
		};
};

Member**mergeSort(Member**&_arr, int size);
Member**mergeSortt(Member**&_arr, int size);

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int input;
	cin>>input;
	
	Member**listM = new Member*[input]();
	int _age;
	string _name;
	for(int i=0; i<input; i++){
		cin>>_age;
		cin>>_name;
		listM[i] = new Member(_age, _name, i);
	}
	
	mergeSort(listM, input);
	
	for(int i=0; i<input-1; i++){
		if(listM[i]->getAge()==listM[i+1]->getAge()){
			for(int j=i+1; j<input; j++){
				if(j==input-1||listM[j]->getAge()!=listM[j+1]->getAge()){
					int size = j-i+1;
					Member**tmpList = new Member*[size]();
					for(int k=0; k<size; k++){
						tmpList[k] = listM[i+k];
					}
					
					mergeSortt(tmpList, size);
					
					for(int k=i; k<=j; k++){
						listM[k] = tmpList[k-i];
					}
					
					delete[] tmpList;
					
					i = j;
					break;
				}
				
				
			}
		}
	}
	
	for(int i=0; i<input; i++){
		cout<<listM[i]->getAge()<<' '<<listM[i]->getName();
		
		if(i!=input-1){
			cout<<"\n";
		}
	}

	for(int i=0; i<input; i++){
		delete listM[i];
	}
	
	delete[] listM;
	
	return 0;
}

Member**mergeSort(Member**&_arr, int size){
	
	if(size == 1){
		return _arr;
	}
	int half = size/2;
	
	Member**halfArr = new Member*[half]();
	for(int i=0; i<half; i++){
		halfArr[i] = _arr[i];
	}
	
	Member**otherArr = new Member*[size-half]();
	for(int i=half; i<size; i++){
		otherArr[i-half] = _arr[i];
	}
	
	halfArr = mergeSort(halfArr, half);
	otherArr = mergeSort(otherArr, (size - half));
	
	int i = 0;
	int j = 0;
	int k =0;
	
	while(k<size){
		if(i<half&&j<(size-half)){
			if(halfArr[i]->getAge()<otherArr[j]->getAge()){
				_arr[k] = halfArr[i];
				i++;
			}else{
				_arr[k] = otherArr[j];
				j++;
			}
		}else if(i<half){
			_arr[k]=halfArr[i];
			i++;
		}else if(j<size-half){
			_arr[k]=otherArr[j];
			j++;
		}

		
		k++;
	}
	
	delete[] halfArr;
	delete[] otherArr;
	
	return _arr;
}

Member**mergeSortt(Member**&_arr, int size){
	if(size == 1){
		return _arr;
	}
	int half = size/2;
	
	Member**halfArr = new Member*[half]();
	for(int i=0; i<half; i++){
		halfArr[i] = _arr[i];
	}
	
	Member**otherArr = new Member*[size-half]();
	for(int i=half; i<size; i++){
		otherArr[i-half] = _arr[i];
	}
	
	halfArr = mergeSort(halfArr, half);
	otherArr = mergeSort(otherArr, (size - half));
	
	int i = 0;
	int j = 0;
	int k =0;
	
	while(k<size){
		if(i<half&&j<(size-half)){
			if(halfArr[i]->getOrder()<otherArr[j]->getOrder()){
				_arr[k] = halfArr[i];
				i++;
			}else{
				_arr[k] = otherArr[j];
				j++;
			}
		}else if(i<half){
			_arr[k]=halfArr[i];
			i++;
		}else if(j<size-half){
			_arr[k]=otherArr[j];
			j++;
		}

		
		k++;
	}
	
	delete[] halfArr;
	delete[] otherArr;
	
	return _arr;
}
