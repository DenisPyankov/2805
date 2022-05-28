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
	int a = 1;
	for (int i = 2; a <= sqrt(N); i++)
		if (N % i == 0)
		{
			for (a <= sqrt(N); a++;)
				if (N % a == 0)
					break;
			out << N / a << " " << N - (N / a);
			return 0;
		}
	out << 1 << " " << N - 1;
}
