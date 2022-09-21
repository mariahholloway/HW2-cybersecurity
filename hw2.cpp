#include<iostream>
#include<cmath>
using namespace std;
long long int power(long long int a, long long int b,
long long int P)
{
    if (b == 1)
    return a;
    
    else
    return (((long long int)pow(a, b)) % P);
}

int main()
{
    long long int P, G, x, a, y, b, ka, kb;
    
    P = 23; // A prime number P is taken
    cout<<"The value of P : "<<P<<"\n";
    
    G = 9; // A primitve root for P, G is taken
    cout<<"The value of G : "<<G<<"\n\n";
    
    a = 4; // a is the chosen private key
    cout<<"The private key a for Alice : "<<a<<"\n";
    x = power(G, a, P); // gets the generated key
    
    b = 3; // b is the chosen private key
    cout<<"The private key b for Bob : "<<b<<"\n\n";
    y = power(G, b, P); // gets the generated key
    
    ka = power(y, a, P); // Secret key for Alice
    kb = power(x, b, P); // Secret key for Bob
    
    cout<<"Secret key for the Alice is : "<<ka<<"\n";
    cout<<"Secret Key for the Bob is : "<<kb<<"\n";
    
    return 0;
}
