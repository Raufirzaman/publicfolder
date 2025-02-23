#include<bits/stdc++.h>
using namespace std;
string format_phone_number(vector<char>& s){
    string answer="";
    int j=0;
   for(int i=0;i<14;i++){
if(i==0)answer.push_back('(');
       else if(i==4)answer.push_back(')');
      else if(i==5)answer.push_back(' ');
       else if(i==9)answer.push_back('-');
       else {answer+=s[j];
       j++;}
   }
   return answer;
}
int main(){
 vector<char>ar(10);
 for(int i=0;i<10;i++){
     cin>>ar[i];
}
string result=format_phone_number(ar);
cout<<result<<endl;
}
