int multiply(int n){
    int temp,mul,rem;
    while(n!=0){
        temp = n;
        rem = temp%10;
        n = n/10;
        mul = rem*multiply(n);
        return mul;
    }
    return 1;
}

int sum(int n){
    int temp,sums,rem;
    while(n!=0){
        temp = n;
        rem = temp%10;
        n = n/10;
        sums = rem+sum(n);
        return sums;
    }
    return 0;
}

bool checkDivisibility(int n) {
    int sums,mul,res;
    mul = multiply(n);
    sums = sum(n);
    res = mul+sums;
    if(n%res==0){
        return true;
    }
    else{
        return false;
    }
}