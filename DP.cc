#include<iostream>
long long DP[64]; 

long long dp(long long a){
  int cnt=0;
  long long ans=0;
  for (int i=64;i>0;i++)
	{
		if((1<<i)&a)
		{
		  ans+=DP[i]+(1<<i)*cnt++;
		}
	}
  return ans;
}

int main()
{
  DP[1]=1;
  for(int i=2;i<65;++i)
	{
		DP[i]=2*DP[i-1]+pow(2,i-1);
	}
  long long a,b;
  cin >> a >> b;

  cout << dp(b)-dp(a-1) << endl;
}
