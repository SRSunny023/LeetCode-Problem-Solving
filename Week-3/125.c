bool isPalindrome(char* s) {
    int i,j,k;
    char* p;
    char* q;
    bool result;
    k = 0;
    p = (char*)malloc(strlen(s)+1);
    q = (char*)malloc(strlen(s)+1);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i]<='Z'){
            p[k++] = s[i]+32;
        }
        else if((s[i]>='a' && s[i]<='z') || (s[i]>=48 && s[i]<=57)){
            p[k++] = s[i];
        }
        else{
            continue;
        }
    }
    p[k]='\0';
    for(j=0;j<k;j++){
        q[j] = p[k-1-j];
    }
    q[k]='\0';
    if(strcmp(p,q)==0){
        result = true;
    }
    else{
        result = false;
    }
    free(p);
    free(q);
    return result;
}