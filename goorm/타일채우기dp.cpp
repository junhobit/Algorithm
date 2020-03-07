//   채우는 방법을 고려해보면
//   2xk 현재 차있는 상태라면
//   2x1를 추가하면 2x(k+1) 차게됩니다.
//   1x2를 두개 추가하면 2x(k+2) 차게된다.
//   2x2를 한개 추가하면 2x(k+2) 차게 된다.
//   점화식으로 만들어보면,
//   F(0) = 1
//   F(1) = 1
//   F(n) = F(n-1) + 2F(n-2)
#include <stdio.h>
int main()
{
   int n, m, dp[1001];
   scanf("%d%d",&n,&m);
   dp[0]=1, dp[1]=1;
   for(int i=2;i<=n;i++) dp[i]=(dp[i-1]+2*dp[i-2])%m;
   printf("%d", dp[n]);
}
