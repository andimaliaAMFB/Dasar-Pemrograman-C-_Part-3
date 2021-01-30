//Listing 13.2 -Demonstrates what happens when you write
//past the end of an array
#include<iostream>
using namespace std;
int main()
{
	//sentinels
	long sentinelOne[3];
	long TargetArray[25];
	long sentinelTwo[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		sentinelOne[i]=0;
		sentinelTwo[i]=0;
	}
	for(i=0;i<25;i++)
	{
		TargetArray[i]=10;
		cout<<"Test 1:\n";
		cout<<"TargetArray[0]"<<TargetArray[0]<<endl;
		cout<<"TargetArray[24]"<<TargetArray[24]<<endl;
		
		for(i=0;i<3;i++)
		{
			cout<<"sentinelOne["<<i<<"]: ";
			cout<<sentinelOne[i]<<endl;
			cout<<"sentinelTwo["<<i<<"]: ";
			cout<<sentinelTwo[i]<<endl;
		}
	}
	cout<<"\nAssigning...";
	for(i=0;i<=25;i++)
	{
		TargetArray[i]=20;
		cout<<"Test 2:\n";
		cout<<"TargetArray[0]"<<TargetArray[0]<<endl;
		cout<<"TargetArray[24]"<<TargetArray[24]<<endl;
		cout<<"TargetArray[25]"<<TargetArray[25]<<endl;
		
		for(i=0;i<3;i++)
		{
			cout<<"sentinelOne["<<i<<"]: ";
			cout<<sentinelOne[i]<<endl;
			cout<<"sentinelTwo["<<i<<"]: ";
			cout<<sentinelTwo[i]<<endl;
		}
	}
	return 0;
}
