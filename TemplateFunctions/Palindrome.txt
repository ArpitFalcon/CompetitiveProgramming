/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Harwork is the key to success. *
******************************************/

bool checkPalin(string s){
    string res = "";
    if(s.size()==1){
        return true;
    }
    for(ll i=s.size()-1;i>=0;i--){
        res += s[i];
    }
    if(res==s){return true;}
    else{return false;}
}


int reverseDigits(int num) 
{ 
    int rev_num = 0; 
    while(num > 0) 
    { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num; 
} 


int isPalindrome(int n) 
{ 
    int rev_n = reverseDigits(n); 
    if (rev_n == n) 
        return 1; 
    else
        return 0; 
} 
