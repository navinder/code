#include <iostream>
using namespace std;
bool IsPalindrome(int val);
int main() 
{
	int val = 1;
	cout<<IsPalindrome(val);
	return 0;
}
bool IsPalindrome(int val)
{
	if(val < 0)
		val*=-1;
	int rep=1;
	while(val/rep > 9)
		rep*=10;
	while(val != 0)
	{
		if(val/rep == val%10 )
		{
			val = (val % rep) /10;
			rep/=100;
		}
		else
		{
			return false;
		}
	}
	return true;
}