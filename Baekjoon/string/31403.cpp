#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string a,b,c;
	
	cin>>a>>b>>c;
	
	cout<<stoi(a)+stoi(b)-stoi(c)<<'\n';
	cout<<stoi(a+b)-stoi(c)<<'\n';
	
	return 0;
}