#include<iostream>
#include<vector>
using namespace std;
#include<bits/stdc++.h>
#include<string>
#include<vector>
#include <set>
#define ll long long int
#define ull unsigned long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mods 1000000007

knapsack(int a[],int n,int sum){
	bool t[n+1][sum+1];
	
		
		for(int i=0;i<n+1;i++){
			
				t[i][0]=true;
			
		}
		for(int i=1;i<sum+1;i++){
		
				t[0][i]=false;
			
		}
		
		for(int i=1;i<n+1;i++){
			for(int j=1;j<sum+1;j++){
				if(a[i-1]<=j){
					t[i][j]= (t[i-1][j - a[i-1]]) || t[i-1][j];
				}
				else{
					t[i][j]=t[i-1][j];
				}
			}
		}
		return (t[n][sum]);
	}

int main(){
	int t=1;
//	cin>>t;
	while(t--){
		int n,sum;
		cin>>n>>sum;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(knapsack(arr ,n ,sum)==true){
			cout<<"YEs";
		}
		else{
			cout<<"NO";
		}
	}
}
