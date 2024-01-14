#include "main.hpp"
#include "suite.hpp"

Fibo::Fibo(int a,int b,int c):_a(a),_b(b),_n(c)
{
    suite.push_back(_a);
    suite.push_back(_b);
    for(int i=2;i <=_n;i++)
    {
        suite.push_back(suite[i-1]+suite[i-2]);
    }
}

Fibo::~Fibo()
{
    suite.clear();
}

void Fibo::Afficher()
{
    for(int i=0;i<suite.size();i++)
    {
        cout<<"F["<<i<<"] : "<<suite[i]<<endl;
    }
}

