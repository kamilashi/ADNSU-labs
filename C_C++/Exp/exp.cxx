#include<iostream>
using namespace std;
class myExp {
	public:
	int n;
	double *p;
		myExp(int i, double x){
			n=i;
			p=new double [n+1];
			p[0]=1;
			for (int k=1; k<=n;k++)
			p[k]=p[k-1]*x/k;
		}
	~myExp () {delete[] p;  }
};
int main() {
	int n,i;
	double x, s=0;
	cout<<"enter n:"<<endl;
	cin>>n;
	cout<<"enter x"<<endl;
	cin>>x;
	
	myExp obj (n,x);
	
	for( i=0; i<=n; i++){
		s+=obj.p[i];
	}
	cout<<"exp ="<<s<<endl;
	return 0;
}