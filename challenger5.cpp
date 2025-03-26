#include<bits/stdc++.h>
using namespace std;
bool lemonade(vector<int>& a){
    bool ans = true;
    int s=0;
    int n=a.size();
    for(int i=0;i<n;i++){if(a[i]==5){s+=5;}
    else {int c=a[i]-5;
        if(s>=c){s+=5;
            s-=c;}
    else{ans=false;break;}
    }
}
return ans;}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
bool ans = lemonade(a);
if(ans){cout << "True";}
else{cout << "False";}
}
