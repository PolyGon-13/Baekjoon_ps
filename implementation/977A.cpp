#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,k;
	
	cin>>n>>k;
	while(k--)
	{
		if(n%10==0)
			n/=10;
		else
			n--;
	}
	cout<<n<<'\n';
	
	return 0;
}
