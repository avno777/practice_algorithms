#include<bits/stdc++.h>
using namespace std;

int n,a[100];
void Try(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n){
			for(int l=1; l<=n; l++){
				if(a[l]==0) cout<<'A';
				else cout<<'B';
			}
			cout<<' ';
			
		}else Try(i+1);
	}
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int t; cin>>t;
	while(t--){
		cin>>n;
		Try(1);
		cout<<'\n';
	}
	return 0;
} 