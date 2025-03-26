long long fastModularExponentiation(long long base,long long exponent,long long mod)
{
    long long ans = 1;

    //handle the edge case of m = 1
    if (mod == 1) return 0;

    while (exponent >0)
    {
        if (exponent %2 != 0)
        {
            ans = (ans *base)%mod;
        }
        base = (base*base)%mod;
        exponent /= 2;
    }
    return ans;
}