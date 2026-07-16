#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int evenWrong=0,oddWrong=0;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i%2==0&&x%2==1)evenWrong++;
            else if(i%2==1&&x%2==0)oddWrong++;
        }

        if(evenWrong!=oddWrong)cout<<-1<<"\n";
        else cout<<evenWrong<<"\n";
    }

    return 0;
}