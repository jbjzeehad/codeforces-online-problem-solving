/*

    @ Jbj Zeehad

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int x,y,a,b,c,t,sum;
cin>>t;
while(t--){
	cin>>a>>b>>c>>x>>y;
	x=x-a;
	if(x<0){
		x=0;
	}
	y=y-b;
	if(y<0){
		y=0;
	}
	sum=x+y;
	if(sum<=c){
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
	}
}