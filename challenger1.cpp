#include<bits/stdc++.h>
using namespace std;
vector<string> remove_virus(string s){
    vector<string>v;
    string temp="";
    int n=s.size();
    for(int i=10;i<n;i++){
        if(s[i]==','){v.push_back(temp);
            temp="";}
        else temp.push_back(s[i]);
    }
    if (!temp.empty()) {
        v.push_back(temp);
    }
    int vn=v.size();
    int d=0;
    for(int i=0;i<vn;i++){
        if(v[i].find("notvirus")!=-1||v[i].find("antivirus")!=-1||v[i].find("antimalware")!=-1){}
        else if(v[i].find("virus")!=-1||v[i].find("malware")!=-1){v.erase(v.begin()+i);d++;}
        else{}
    }
    vn=v.size();
     for(int i=0;i<vn;i++){
        if(v[i].find("notvirus")!=-1||v[i].find("antivirus")!=-1||v[i].find("antimalware")!=-1){}
        else if(v[i].find("virus")!=-1||v[i].find("malware")!=-1){v.erase(v.begin()+i);d++;}
        else{}
    }


    return v;

}
int main(){
    string s;
 getline(cin, s);
  vector<string> cleaned_data = remove_virus(s);
    cout << "PC Files: ";
    for (const string& file : cleaned_data) {
        cout << file << " ";
    }
    return 0;

}
