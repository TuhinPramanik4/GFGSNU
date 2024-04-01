bool isUgly(int n) {
    bool uglynumber=false;
    if(n<=0){
        uglynumber=false;
    }
    else{
        while(n!=1){
            if(n%2==0){
                n=n/2;
            }
            else if(n%3==0){
                n=n/3;
            }
            else if(n%5==0){
                n=n/5;
            }
            else{
                break;
            }
        }
        if(n==1){
            uglynumber=true;
        }
        else{
            uglynumber=false;
        }
    }
    return uglynumber;
}
