#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void cal(char n1, char n2, int &carry, string &ans){
    if((n1=='1'&&n2=='1')&&carry==1){
        carry = 1;
        ans+='1';
    }
    else if((n1=='1'&&n2=='1')&&carry==0){
        carry = 1;
        ans+='0';
    }
    else if((n1=='1'||n2=='1')&&carry==1){
        carry = 1;
        ans+='0';
    }
    else if((n1=='1'||n2=='1')&&carry==0){
        carry = 0;
        ans+='1';
    }
    else if((n1=='0'&&n2=='0')&&carry==1){
        carry = 0;
        ans+='1';
    }
    else{
        carry = 0;
        ans+='0';
    }
}

int main() {
    string ans = "";
    int carry = 0;
    int i,j;
    char n1,n2;
    int sum;

    string b1, b2;
    cin>>b1>>b2;

    string max = b1;
    string min = b2;
    if(b2.length()>b1.length()){
        max = b2;
        min = b1;
    }

    j = min.length()-1;
    for(i = max.length()-1; j>=0; i--){  //작은 수 자리만큼 계산

            n1 = max[i];
            n2 = min[j];

            cal(n1, n2, carry, ans);
            j--;
    }

    for(;i>=0; i--) {  //남은 큰자리 수 계산
        n1 = max[i];
        cal(n1, '0', carry, ans);
    }

    if(carry==1){  //넘어가는 자릿수
        cal('0', '0', carry, ans);
    }

    reverse(ans.begin(), ans.end());
    //불필요한 앞쪽 0 제거
    int k;
    for(k = 0;k<ans.length();k++){
        if(ans[k]=='0'){
            continue;
        }
        else
            break;
    }
    ans = ans.substr(k, ans.length());
    if(ans.length()==0){
        ans = "0";
    }

    cout<<ans;

}