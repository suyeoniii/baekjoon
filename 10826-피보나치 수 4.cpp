string str_sum(string s1, string s2){
    string mi = s2, ma = s1;
    string s = "";
    int carry = 0;

    //짧은 문자열 앞에 '0'을 붙여서 긴문자열과 같은 길이로 만듬
    for(int i = 0; i<s1.length()-s2.length(); i++){
        mi = '0'+ mi;
    }

    for(int i = ma.length()-1;i>=0;  i--){
        int num = 0;
        mi[i] = mi[i]-'0';
        ma[i] = ma[i]-'0';

        if(carry > 0){
            carry -= 1;
            num += 1;
        }

        num += ma[i]+mi[i];

        if(num>=10) {
            carry += 1;
            num -= 10;
        }

        s += (num + '0');
    }
    //연산 종료후 carry가 남아있으면 자릿수 하나 추가
    if(carry>0){
        s += '1';
    }
    reverse(s.begin(), s.end());
    return s;
}
