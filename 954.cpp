#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ifstream in("in.txt");
	ofstream out("out.txt");
    int x;
    in >> x;
    vector<int>v(x + 1, 0);
    v[0] = 1;
    int m = 1000000;
    for (int i = 1; i <= x; ++i)
    {
        if (i >= 10)
            v[i] += v[i - 10];
        if (i >= 11)
            v[i] += v[i - 11];
        if (i >= 12)
            v[i] += v[i - 12];
        v[i] %= m;
    }
    out << v[x] * 2 % m;
}
