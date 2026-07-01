#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

void solve()
{
	int n,k;
	cin>>n>>k;
	vector<int> A(n);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	sort(A.begin(), A.end());
	int left=0, right=n-1;
	int count=0;
	while(left<right){
		int sum = A[left]+A[right];
		if(sum=k)
		{
			count++;
			left++;
			right--;
		}
		else if(sum<k) left++;
		else right--;
	}
	cout<<count;
	cout<<endl;
	
	
}

int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
