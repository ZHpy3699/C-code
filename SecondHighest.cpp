//Second Highest Algorithm
#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;
int main(){
	int n = 8;
	ll arr[n] = {1,3,2,4,5,7,6,8};
	sort(arr,arr+n);
	int b1;
	int d1;
	for(int i = 0;i < n/2;i++){
		d1 = 0;
	}
	for(int i = 0;i < n;i++){
		if(arr[i]>d1){ //d1 became second highest
			b1 = d1; // b1 equals to second highest
			d1 = arr[i]; // d1(second highest) become highest
		} else if(arr[i]>b1){
			b1 = arr[i]; // b1 become arr[i] that bigger than him (else if)
		}
	}
	cout<<b1<<"\n";

}
