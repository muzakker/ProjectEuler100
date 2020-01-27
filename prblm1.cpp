#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, j, m5, countSum = 0;
	for(i = 1; (3 * i) < 1000; i++)
	{
		countSum += (3 * i);
	}
	for(j = 1; (5 * j) < 1000; j++)
	{
		m5 = (5 * j);
		if(m5 % 3 == 0)
		{
			continue;
		}
		else
		{
			countSum += m5;
		}
	}
	printf("%d", countSum);
	return 0;
}	
