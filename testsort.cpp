#include <algorithm>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include "algoritmo.h"
using namespace std;

int *TA,*TB;
typedef int myint;
typedef void(*fun_sort)(int*, int);

bool test_sort(fun_sort sort,const int *A,int n)
{
	memcpy(TA,A,sizeof(int)*n);
	memcpy(TB,A,sizeof(int)*n);
	
	clock_t t=clock();
	sort(TA,n);
	float time=float(clock()-t)/CLOCKS_PER_SEC;
	std::sort(TB,TB+n);
	
	for(int i=0;i<n;i++)
	{
		if(TA[i]!=TB[i])
		{
		return false;
		}
	}
	
	cout<<time<<" ";
	return true;
}

int main()
{
	srand(time(NULL));
	int N=10000;
	int *A=new int[N];
	TA=new int[N];
	TB=new int[N];
	
	fun_sort sort[3]={BubbleSort,selectionSort,insertionSort};
	
	for(int n=100;n<=N;n*=10)
	{
		for(int i=0;i<n;i++)
		{
			A[i]=rand()%n;
		}
		
		cout<<n<<" ";
		
		for(int s=0;s<3;s++)
		{
			if(!test_sort(sort[s],A,n))
			{
			cout<<"FAIL\n";
			return 0;
			}
		}
	cout<<endl;
	}
	delete[]TA;
	delete[]TB;
}
