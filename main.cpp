#include "main.hpp"
#include "suite.cpp"


int fibonacci(int n)
    {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
     cout<<"****** METHODE AVEC VECTOR  *********"<<endl;
    auto start = chrono::high_resolution_clock::now();
    Fibo f1(0,1,1000000);
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<std::chrono::microseconds>(stop - start);
    cout << "Temps d'execution : " << duration.count() << " microsecondes" <<endl;
    // f1.Afficher();
    cout<<"****** METHODE CLASSIQUE  *********"<<endl;
    auto start2 = chrono::high_resolution_clock::now();
    cout<<fibonacci(500)<<endl;
    auto stop2 = chrono::high_resolution_clock::now();
    auto duration2 = chrono::duration_cast<std::chrono::microseconds>(stop2 - start2);
    cout << "Temps d'execution : " << duration2.count() << " microsecondes" <<endl;
}

