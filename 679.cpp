#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ifstream in("in.txt");
	ofstream out("out.txt");
    int N;
    in >> N;
    int a = 0;
    int b = N / 3;
    if (N % 3 == 1)
    {
        a = 2;
        b = (N - 4) / 3;
    }
    if (N % 3 == 2)
    {
        a = 1;
        b = (N - 2) / 3;
    }
    if (a > 0 && b > 0)
        out << 2 << " " << a << " " << 3 << " " << b;
    else if (a > 0)
        out << 2 << " " << a;
    else
        out << 3 << " " << b;
}
