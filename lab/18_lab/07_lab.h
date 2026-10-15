
int prime(int a){
    int i=1,count=0;
    while (i<=a)
    {
        if (a%i==0)
        {
            count++;
        }
        i++;
    }
    if (count==2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int armstrong(int a){
    int ver=a,ver_2=a,count=0,mul=1,sum=0;
    while (ver!=0)
    {
        ver=ver/10;
        count++;
    }
    for (; a!=0;a=a/10)
    {
        mul=1;
        for (int i = count; i > 0; i--)
        {
            mul=mul*(a%10);
        }
        sum=sum+mul;
    }
    if (sum==ver_2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int perfect(int a){
    int i=1,sum=0;
    while (i<a)
    {
        if (a%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if (sum==a)
    {
       return 0;
    }
    else
    {
        return 1;
    }

}
