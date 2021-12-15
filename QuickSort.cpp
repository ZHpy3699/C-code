//Quick Sort
#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long 
using namespace std;
int main(){
	int n = 10000;
    ll arr[n];
    ifstream file("QuickSort.txt");
    string str;
    int k = 0;
	ll count;
    while (getline(file, str)) {
        arr[k] = stoi(str);
        k++;
	}
	int pivot = (arr[10000]);
	int a = 0;
	int b = n-1;
	for(int i = 0;i < n;i++){
		if(arr[i]<pivot){
			swap(arr[i],arr[a]);
			a++;
		} else if(arr[i]>pivot) {
			swap(arr[i],arr[b]);
			b--;
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = i+1;j <= n;j++){
			if(arr[j]<arr[i]){
				swap(arr[i],arr[j]);
			}
		}
	}
	for(int i = 0; i < n;i++){
		cout<<arr[i]<<" ";
		
	}
	//cout<<count;
	printf("\n");
	return 0;
}
