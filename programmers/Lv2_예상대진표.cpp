#include <iostream>
#include <math.h>

using namespace std;

int solution(int n, int a, int b)
{
    int answer,half;
    int start=0;
    for(int i=log(n)/log(2);i>0;i--)
    {
        half = (n+start)/2;
        if ((a<=half && b>half) || (b<=half && a>half))
            return i;
        else if (a<=half && b<=half)
            n = half;
        else
            start = half;
    }
}
