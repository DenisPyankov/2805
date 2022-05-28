#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ifstream in("in.txt");
	ofstream out("out.txt");
    int n;
    in >> n;

    vector <vector <int>> v(n + 1, vector<int>(n + 1));
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j <= n; j++) 
            in >> v[i][j]; 

    vector <int> res(n + 1, 100000);
    res[0] = 0;
    for (int i = 1; i <= n; i++) 
        for (int j = 0; j < i; j++)
            res[i] = min(res[i], res[j] + v[j][i]);
    out << res[n];

}
