#include<iostream>
using namespace std;
main()
{
	cout<<"My operating system project"<<endl;
	int a[] = {86,1470,913,1774,948,1509,1022,1750,130};
//int a[] = {98,183,41,122,14,124,65,67};
	int index,initial = 0,final = 4999,current = 143,temp,distance=0;
	//current head position is 143 and previous position 
	//is 125 so direction is from left to right
	temp=current;

for(int i=1;i<9;i++)
{
	
	for(int i=0;i<=8;i++)
	{
		if(a[i]>a[i+1])
		{
			int temp;
			temp = a[i];
			a[i]= a[i+1];
			a[i+1]=temp;
		}
	} 
}

	
	for(int i=0;i<9;i++)
	{
		int max = a[8];
		if(a[i]>current)
		{		
			distance +=(a[i]-current);
			current = a[i];
			if(current==max)
			{	
				distance+=(final-current);
				current=a[0];
			}
		}
	}
	
	
	distance += (final-initial);
	
	//cout<<"distance :"<<distance<<endl;	
	
	distance+=(a[0]-initial);
	
	//cout<<"distance :"<<distance<<endl;
	
	for(int i=0;i<=8;i++)
	{		
		if((a[i]<temp)&&(a[i+1]<temp))
		{		
			distance+=(a[i+1]-a[i]);	
		}
	}
	
	cout<<"distance "<<distance<<endl;

}
