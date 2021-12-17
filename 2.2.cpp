#include<iostream>
using namespace std;
class fact{
	int n, i, facti;
	public:
		fact1(int x)
		{
			n=x;
			facti=1;
			
			
		}
		fact2(fact &x)
		{
			n=x.n;
			facti=1;
		}
		void calculate()
		{
			for(i=0;i<=n;i++)
			{
				facti=facti*i;
			}
			cout<<facti<<" is fact";
		}
};

int main()
{
	int x;
	cout<<"enter value ";
	cin>>x;
	fact f1(x);
	f1.calculate();
	fact f2=f2;
	
	f2.calculate();
	
	return 0;
}
