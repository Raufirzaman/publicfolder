#include<bits/stdc++.h>
using namespace std;
string space(string a){
    string b="";
    for(int i=0;i<a.size();i++){
        if(a[i]=='['){
            string c="";
            i++;
            int n=a[i]-'0';
            i++;
           while(a[i]!=']'){ c+=a[i];
                i++;
            }
         while(n--){
                b+=c;
            }
        }
        else{
            b+=a[i];
        }
    }
    return b;
}
int main(){
string q;
cin>>q;
cout<<space(q);
}
