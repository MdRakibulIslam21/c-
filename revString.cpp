#include<iostream>
using namespace std;

int main(){
string str;
getline(cin,str);
for(int i = str.length()-1;i>=0;i--){
    cout<<str[i];
}
}
