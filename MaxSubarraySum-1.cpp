#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("input.txt","r", stdin) ;
freopen("output.txt","w", stdout) ;
int n;
cin>>n;
int arr[n];
int MaxSum=INT_MIN,CurrSum=0;
for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<n;i++){
	for(int j=i;j<n;j++){
		CurrSum=0;
		for(int k=i;k<=j;k++){

		CurrSum=CurrSum+arr[k];
		
		}
		MaxSum=max(MaxSum,CurrSum);
	}
}
cout<<MaxSum<<endl;
	return 0;
}
