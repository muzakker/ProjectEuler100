#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, count1 = 1, count2 = 2, FV = 0, countSum = 2;
	for(i = 1; i > 0  ; i++)
	{
		if(FV > 4000000)
		{
			break;
		}
		FV = count1 + count2;
		count1 = count2;
		count2 = FV;
		if(FV % 2 == 0)
		{
			countSum += FV;
		}
		else
		{
			continue;
		}
	}
	printf("%d", countSum);
	return 0;
}
		
