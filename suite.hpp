#ifndef SRC_SUITE_H_
#define SRC_SUITE_H_


class Fibo
{
    private:
        int _a,_b,_n;
        vector<int> suite;
    public:
        Fibo(int,int,int);
        ~Fibo();
        void Afficher();
};

#endif