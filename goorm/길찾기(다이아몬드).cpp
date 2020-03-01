#include <iostream>
using namespace std;
int d[256][128];
int t[256][128];
int n;

int hSize(int i) 
{
    if (i < n)
    {
        return i + 1;
    }
    return n + n - 1 - i;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n + n - 1; i++)
    {
        for (int j = 0; j < hSize(i); j++)
        {
            scanf("%d", &d[i][j]);
        }
    }
    t[0][0] = d[0][0];
    for (int i = 0; i < n + n - 2; i++)
    {
        for (int j = 0; j < hSize(i); j++)
        {
            if (i < n - 1) {
                t[i + 1][j] = max(t[i + 1][j], d[i + 1][j] + t[i][j]);
                t[i + 1][j + 1] = max(t[i + 1][j + 1], d[i + 1][j + 1] + t[i][j]);
            }
            else
            {
                t[i + 1][j] = max(t[i + 1][j], d[i + 1][j] + t[i][j]);
                if (j - 1 >= 0)
                {
                    t[i + 1][j - 1] = max(t[i + 1][j - 1], d[i + 1][j - 1] + t[i][j]);
                }
            }
        }
    }
    printf("%d\n", t[n + n - 2][0]);
    return 0;
}
