#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("input.txt","r", stdin) ;
freopen("output.txt","w", stdout) ;
int n;
cin>>n;
int arr[n];
int MaxSum=INT_MIN,CumSum[n]={0},CurrSum=0;
cin>>arr[0];
CumSum[0]=arr[0];
for(int i=1;i<n;i++){
cin>>arr[i];
CumSum[i] =CumSum[i-1]+arr[i];
}
for(int i=0;i<n;i++){

	for(int j=i;j<n;j++){
		CurrSum=0;
		CurrSum=CumSum[j]-CumSum[i-1];
		MaxSum=max(MaxSum,CurrSum);
}
		}
		
cout<<MaxSum<<endl;
	return 0;
}
