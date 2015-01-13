#include <iostream>
#include<string.h>
using namespace std;

bool IsPalindrome(char val[]);
int findaroundMiddle(char[],int,int,int&);
int main() {
	char val[] = "22131232131";
	IsPalindrome(val);
	return 0;
}

bool IsPalindrome(char val[])
{
	int len = strlen(val);
	if(len == 0)
		return false;
	int maxStart=0, maxEnd=0,maxLength=0,start;
	for(int i=0;i< len;i++)
	{
		start=0;
		int len1 = findaroundMiddle(val,i,i,start);
		if(len1 > maxLength){
			maxStart = start;
			maxEnd = start + len1;
			maxLength = len1;
		}
		len1 = findaroundMiddle(val,i,i+1,start);
		if(len1 > maxLength){
			maxStart = start;
			maxEnd = start + len1;
			maxLength = len1;
		}
	}
	cout<<"printing"<<endl;
	while(maxStart<maxEnd){
		cout<<val[maxStart++];
	}
}
int findaroundMiddle(char val[],int mid, int midnex, int& start)
{
	int length=0,arrayLength = strlen(val);
	start = mid;
	while( mid>0 && midnex<=arrayLength && val[mid] == val[midnex])
	{
		start = mid;
		if(mid-- == midnex++ )
			length+=1;
		else
			length+=2;
	}
	return length;
}