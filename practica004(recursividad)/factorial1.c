int factorial(int num)
{
    int rta;
    if(num==1)
    {
        rta=1;
    }else
    {
        rta=num*factorial(num-1);
    }
    return rta;
}
