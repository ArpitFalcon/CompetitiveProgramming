/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Harwork is the key to success. *
******************************************/

ll mult(ll x, ll y){
    ll ans = 1;
    while(y>0){
        if(y%2)
            ans = (ans * x) % 10000007;
        x = (x*x) % 10000007;
        y = y>>1;
    }
    return ans;
}


long power(int a, int N){
    if(N==0)
        return 1;
    else if(N==1)
        return a;
    else{
        int R = power(a ,N/2);
        if(N%2==0)
            return R*R;
        else
            return R*a*R;
    }
}

long power(int a, int N, int M) {
    if (N == 0) {
        return 1;
    } else {
        long R = power(a, N / 2, M);
        if (N % 2 == 0) {
            return (R * R) % M;
        } else {
            return (R * R * a) % M;
        }
    }
}



