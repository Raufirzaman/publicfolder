#include<bits/stdc++.h>
using namespace std;
vector<char> shuffled_array(vector<char>& a, vector<char>& b){
    int n;
    int s;
    int o;
    if(a.size()>b.size()){
        n=a.size();
        s=b.size();
        o=1;
    }
    else{
        n=b.size();
        s=a.size();
        o=2;
    }
    vector<char> ans;
    for(int i=0;i<n;i++){
        if(o==1&&i<s){
            ans.push_back(a[i]);
            ans.push_back(b[i]);
        }
        else if (o==1&&i>=s){
            ans.push_back(a[i]);
        }
        else if(o==2&&i<s){
            ans.push_back(a[i]);
            ans.push_back(b[i]);
        }
        else if(o==2&&i>=s){
            ans.push_back(b[i]);
        }
    
        }
    return ans;
    }

int main(){
    vector<char>a;
    vector<char>b;
    int an,bn;
    cin>>an;
    for(int i=0;i<an;i++){
        char x;
        cin>>x;
        a.push_back(x);
    }
    cin>>bn;
    for(int i=0;i<bn;i++){
      char x;
        cin>>x;
        b.push_back(x);
    }
    vector<char>ans=shuffled_array(a,b);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}
