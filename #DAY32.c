bool halvesAreAlike(char* s) {
    int count1=0;
    int count2=0;
    int firstpart=strlen(s)/2;
    for( int i=0;i<firstpart;i++){
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
         count1++;
        }
    }
    for( int i=firstpart;i<strlen(s);i++){
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
         count2++;
        }
    }
    if(count1==count2){
        return true;
    }
    else{
        return false;
    }
}