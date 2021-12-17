#include<iostream>
using namespace std;
class fd{
	int fdno, amt, mamt, intrest, mons;
	public:
		fd(int FDNO, int AMt, int MM, int in)
		{
			fdno=FDNO;
			amt=AMt;
			mons=MM;
			intrest=in;
		}
		
		void maturityamt()
		{
			mamt=amt+(amt*mons*intrest)/1200;
			
		}
		void display()
		{
			cout<<"fd no "<<fdno<<"  maturity amount "<<mamt;
		}
};

int main()
{
	fd fd1=fd(1111, 100, 12, 10);
	fd1.maturityamt();
	fd1.display();
	return 0;
}
