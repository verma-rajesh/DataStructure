#include<iostream>
void rotation(int *, int);
int main()
{
	int t,n,*ptr;
	std::cout<<"Enter no. of test case: ";
	std::cin>>t;

	for (int i = 1; i <=t; ++i)
	{
		 std::cout<<"Enter size of " <<i <<" case: ";
		 std::cin>>n;
		 std::cout<<"Enter "<<n<<" elements ";
		 ptr=new int[n];
		 for (int i = 0; i < n; ++i)
		 {
		 	std::cin>>*(ptr+i);

		 }

	}
	rotation(ptr,n);
	std::cout<<"After rotation: ";
	for (int i = 0; i < n; ++i)
	{
		std::cout<<*(ptr+i)<<"  ";
	}
	
	return 0;
}

void rotation(int *ptr,int n)
{
	int x=*(ptr+n-1);
	for (int i = n-1; i >0 ; --i)
	*(ptr+i)=*(ptr+i-1);
	*(ptr)=x;

}