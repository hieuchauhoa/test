#include<iostream.h>
#define maxn 100
using namespace std;
void findMax5(int arr[maxn],int &size);
int findMax(int arr[maxn],int &l,int size);
void deleteL(int arr[maxn], int l,int &size);

int main(){
	int array[]={10,10,11,1,2,3,4,5,6,7,8,9};


	int size=sizeof(array)/sizeof(array[0]);
	cout<<"Output: ";
	findMax5(array,size);
	cout<<endl;
	system("pause");

}

void findMax5(int arr[maxn],int &size)
{
	for(int i=0;i<5;i++)
	{
		int l=0;
		l=findMax(arr,l,size);
		cout<<arr[l]<<" ";
		deleteL(arr,l,size);
		
	}
}

int findMax(int arr[maxn], int &l,int size)
{
	int max=arr[0];
	for(int i=1;i< size; i++)
	{
		if(max<arr[i])
		{
		  max=arr[i];
		  l=i;  		
		}
	}
	return l;
}
void deleteL(int arr[maxn], int l,int &size)
{
 
 for(int i=l;i<size;i++)
  arr[i]=arr[i+1]; 
  
  size-=1;

}