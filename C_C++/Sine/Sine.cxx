#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n){
	if (n==1) return 1;
	else return n*factorial(n-1);
}

class mySine {
	public:
	int n;
	double *p;
		mySine(int i, double x){
			int k;
			n=i;
			p=new double [n+1];
			p[0]=x;
			
			for (k=1; k<=n;k++)
			
			p[k]=pow(-1,k)*(p[k-1]*x*x)/(2*k*(2*k+1));
			
		}
	~mySine () {delete[] p;  }
};

int main() {
	int n,i;
	double x, s=0;
	cout<<"enter n:"<<endl;
	cin>>n;
	cout<<"enter x"<<endl;
	cin>>x;
	
	mySine obj (n,x);
	
	for( i=0; i<=n; i++){
		s+=obj.p[i];
	}
	cout<<"sin ="<<s<<endl;
	return 0;
}