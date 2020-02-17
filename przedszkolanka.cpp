//SPOJ submission 22989717 (CPP)plaintext list.Status: AC, problem PRZEDSZK, contest SPOJPL.By ravruc(ravruc), 2019 - 01 - 03 22 : 00 : 40.
#include <iostream>

using namespace std;



int main()
{
    int prob, a, b, aa, bb;
    cin >> prob;

    for (int i = 1; i <= prob; i++)
    {

        cin >> a >> b;
        aa = a;
        bb = b;
        for (;;)
        {
            if (aa == bb)
            {
                cout << aa << endl;
                break;
            }
            if (aa < bb)
                aa = aa + a;
            if (aa > bb)
                bb = bb + b;
        }

    }


    return 0;
}
