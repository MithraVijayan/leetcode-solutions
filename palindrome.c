bool isPalindrome(int x) {
    int temp,d;
    long r=0;
    temp=x;
    while(x>0)
    {
       d=x%10;
       r=r*10+d;
       x=x/10;

    }
    if(r==temp)
    return true;
    else
    return false;
}