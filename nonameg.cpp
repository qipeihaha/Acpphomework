#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a=0,b;
	cin>>n>>m;
	for (;n;n--){
		cin>>b;
		if(b==m) a++;
	}
	cout<<a;
	return 0;
}
