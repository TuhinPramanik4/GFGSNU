int pivotInteger(int n) {
    int sum=((n*(n+1))/2);
    int sum2=0;
    if(n==1){
        return 1;
    }
    else{
    for(int i=1;i<n;i++){
        sum2+=i;
        if((sum-sum2+i )==sum2){
            return i;
        }
    }
    }
   return -1;
}