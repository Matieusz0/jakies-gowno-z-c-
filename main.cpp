#include <iostream>
using namespace std;

const int LEN = 26;

struct Para {
    char c;
    int n;
};
int main()
{
    Para tab [LEN];
    string txt = "hello world";

    for(int i = 0; i < LEN; i++){
        tab [i+ 97].c = i + 97;
        tab[i + 97].n = 0;
    }

    for(int i = 0; i < LEN; i++){
        cout << tab[i + 97].c << " : " << tab[i + 97].n << endl;
    }

    return 0;
}
