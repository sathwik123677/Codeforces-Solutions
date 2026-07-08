#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<long long> p;
	for (long long i=2;i<=100000;i++){
		bool isprime=true;
		for (long long j=2;j*j<=i;j++){
			if (i%j==0){
				isprime=false;
				break;
			}
		}
		if (isprime)p.push_back(i);
	}
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        long long a=-1,q=-1;
        for(long long i=0;i<p.size();i++){
        	if (p[i]>=1+d){
        		a=p[i];
        		break;
            }
        }
        for(long long i=0;i<p.size();i++){
        	if (p[i]>=a+d){
        		q=p[i];
        		break;
            }
        }
        cout<<a*q<<endl;
    }
}
        
    
