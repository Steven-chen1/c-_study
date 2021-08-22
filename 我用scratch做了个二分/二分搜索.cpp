#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;

int arr[1005]
int main()
{
	int ans,num;
	cin >> num >> ans;
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}
	sort(a+1,a+1+n,greater<int>());
	while(l<=r){
		int left=1,right=n+1,mid;
		mid = (left+right)/2;
		if(arr[mid]==ans){
			cout << mid << endl;
			return 0;
		}else if(arr[mid]<ans){
			left = mid+1;
		}else{
			right = mid-1;
		}
	}
	system("pause");
	return 0;
}

