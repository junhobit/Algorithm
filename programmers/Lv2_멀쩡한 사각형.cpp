using namespace std;
#include <math.h>

int gcdu(int a, int b)
{
    int t;
    while(b)
    {
        t = b;
        b = a%b;
        a = t;
    }
    return a;
}

long long solution(int w,int h) {
    long long answer=(long long)w*h;
    answer -= w+h - gcdu(w,h);
    return answer;
}
