#include <iostream>
#include<string.h>
using namespace std;
/*
http://leetcode.com/2010/11/microsoft-string-replacement-problem.html
Replace all occurrence of the given pattern to ‘X’.
For example, given that the pattern=”abc”, replace “abcdeffdfegabcabc” with “XdeffdfegX”. Note that multiple occurrences of abc’s that are contiguous will be replaced with only one ‘X’.
*/
int ReplacePattern(char*,char*);
bool PatternMatched(char *arr, char *pat);
int main() {
	char val[] = "sababcdefg";
	char pat[] = "ab";
	ReplacePattern(val,pat);
	cout<<"\n"<<val;
	return 0;
}

int ReplacePattern(char *val, char *pat)
{
	int i=0,j=0;
	int length = strlen(val);
	int plen = strlen(pat);
	char *pSlow=val, *pFast =val;
	bool matched =false;
	while(*pFast !='\0')
	{
		bool matched =false;
		if(PatternMatched(pFast, pat))
		{
			pFast += plen;
			matched = true;
		}
		if(matched)
		{
			*pSlow++ = 'X';
		}
		if(pFast!='\0' & !matched) 
			*pSlow++ = *pFast++;
		
	}
	*pSlow='\0';
}

bool PatternMatched(char *arr, char *pat)
{
	while(*pat)
	{
		if(*pat++ != *arr++)
			return false;
	}
	return true;
}