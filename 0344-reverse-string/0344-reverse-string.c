void reverseString(char* s, int sSize) {
    
    char x;
    for(int i=0;i<sSize/2;i++)
    {
        char x=s[i];
        s[i]=s[sSize-1-i];
        s[sSize-1-i]=x;
    }
}