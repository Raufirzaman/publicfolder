#include<bits/stdc++.h>
using namespace std;
string turnCalc(string num){
reverse(num.begin(),num.end());
string msg="";
for(auto i:num){
    if(i=='1')msg+="I";
    else if(i=='2')msg+="Z";
    else if(i=='3')msg+="E";
    else if(i=='4')msg+="H";
    else if(i=='5')msg+="S";
    else if(i=='6')msg+="G";
    else if(i=='7')msg+="L";
    else if(i=='8')msg+="B";
    else if(i=='9')msg+="-";
    else if(i=='0')msg+="O";
}
return msg;
}
int main()
{
 string n;
    cin>>n;
    cout<<turnCalc(n);  
}
