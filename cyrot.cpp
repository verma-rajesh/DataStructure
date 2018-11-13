//Program for cyclically rotation by one
void cyclicrotation(int arr[], int );
#include<iostream>

void cyclicrotation(int arr[],int n)
{
	int x=arr[n-1];

	std::cout<<"\nfunction rotation:";

	for (int i = n-1; i >0; --i)
		 arr[i]=arr[i-1];
		arr[0]=x;
	

}

int main()
{
	int arr[5]={1,2,3,4,5},i;

	int n=sizeof(arr)/sizeof(arr[0]);
    
	std::cout<<"array are:\n";
	
	for (int i = 0; i < n; ++i)
	{
		std::cout<< arr[i] <<"  ";
	}

	cyclicrotation(arr,n);

	std::cout << "\nRotated array is\n"; 
    for (i = 0; i < n; i++) 
     std::cout << arr[i]<<"  "; 
  	
	return 0;
}
