#include<stdio.h>
int Selectionsort(int i,int j,int t,int len,int a[]);
main()
{
	int a[]={3,5,1,4,2};
	int len=sizeof(a)/sizeof(int);
	int i,j,t,r;
	r=Selectionsort(i,j,t,len,a);
	printf("%d ",r);
}
int Selectionsort(int i,int j,int t,int len,int a[])
{
	for(i=0;i<len-1;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
			for(i=0;i<len;i++)
		 return a[i];
	}
	for(i=0;i<len;i++)
		 return a[i];
}
