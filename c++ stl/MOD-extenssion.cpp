___  1
// (a*b)%MOD
   ((a%MOD)*(b%MOD))%MOD

2  _______________________________________________________________________________________________________________________

// (a+b)%MOD
   ((a%MOD)+(b%MOD))%MOD

3  _______________________________________________________________________________________________________________________

//  (a-b)%MOD
   ((a%MOD)-(b%MOD)+MOD)%MOD

4  ________________________________________________________________________________________________________________________

//  when devide is there with no condition of gcd an all
//  (a/b)%MOD
    // for this first we calculate moduloinvers of b
    // let it x
    // then we calculate (a*x)%MOD normally;
    
    typedef unsigned long long int ull;    
    ull inv(ull a,ull MOD)
{
	ull ans = 1, b = MOD - 2;
	while (b) {
		if (b & 1) {
			ans = (ans * a) % MOD;
		}
		b >>= 1;
		a = (a * a) % MOD;
	}
 
	return ans;
}

    x = inv(b,MOD);

   
5  _______________________________________________________________________________________________________________________   
   
// when devide is there with some condition

// like if   gcd(a,b) = 1;

// then (1/c)%MOD = modInverse(c,MOD);

____CODE

ull d, x, y;
void extendedEuclid(ull A, ull B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        ull temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

int modInverse(int A, int M)
{
    extendedEuclid(A,M);
    return (x%M+M)%M; 
}
   
______   
   
//     here d is the gcd of a and b;
//     x is the ans of modulo invers of a under modulo b
//     and y is the ans of modulo invers of b under modulo a
//     if (a/c)%MOD  and gcd(c,d) = 1;
//     calculate first 1/c then (a*(1/c))%MOD


6  __________________________________________________________________________________________________________________________


// if there is A^b 
// like (a^b/c)%MOD
// then first calculate (a^b)  then 1/c (according to some condition(see 5) or not(see 4))

  // for (a^b)
  // (a^b) = modularExponentiation(a,b,MOD);
  
  ull modularExponentiation(ull x,ull n,ull M)
{
    ull result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=(result * x)%M;
        x=(x*x)%M;
        n=n/2;
    }
    return result;
}

________________________________________________________________________
