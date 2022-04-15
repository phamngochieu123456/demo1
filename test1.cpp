#include<iostream>
#include<iomanip>
using namespace std;

void f1(int r, int s, int e)
{
	if(s>e) return;
	int i,j,k;
	for(i=1;i<=r;i++)
	{
		for(j=s;j<=e;j++)
		{
			cout<<right;
			cout<<setw(3)<<j<<" * "<<setw(3)<<i<<" = ";
			cout<<left;
			cout<<setw(8)<<j*i;
		}
		cout<<endl;
	}
	cout<<endl;
}

int main()
{
	int r,c,m;
	cout<<"Nhap r,c,m: ";
	cin>>r>>c>>m;
	
	int d = m/c;
	int i,j,k;
	
	for(i=0;i<d;i++)
	{
		f1(r,i*d+1,i*d+c);
	}
	f1(r,d*c+1,m);
	
	return 0;
}
