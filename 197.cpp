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
    vector<vector<int>> v(N, vector<int>(N, 0));


    int x = 0, y = 0, a = 1;
    v[0][0] = 1;
    while (a < N*N) {
        if (x < N - 1)
            x++;
        else if (y < N - 1)
            y++;
        else
            break;
        a++;
        v[x][y] = a;

        while (x > 0 && y < N - 1) {
            x--;
            y++;
            a++;
            v[x][y] = a;
        }

        if (y == N - 1)
            x++;
        else if (x == N - 1)
            break;
        else
            y++;
        a++;
        v[x][y] = a;

        while (x < N - 1 && y > 0) {
            x++;
            y--;
            a++;
            v[x][y] = a;
        }
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            out << v[i][j] << " ";
        }
        out << endl;
    }
}
