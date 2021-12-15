#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;
int main(){
	int n;cin >> n;
	int count=1;
	ll arr[n];
	for(int i= 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	for(int i = 1;i < n;i++){
		if(arr[i]!=arr[i-1]){
			count++;
		}
	}
	cout<<count<<"\n";	
}
