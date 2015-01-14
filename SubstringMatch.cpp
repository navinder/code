#include <iostream>
#include<string.h>
using namespace std;
/*
http://leetcode.com/2010/10/implement-strstr-to-find-substring-in.html
Write C code to implement the strstr (Search for a substring) function. Do not use any system library such as strlen.
*/

char* strstr(char*,char*);
int main() {
   char val[] = "sababcdefg";
   char pat[] = "def";
   char* n=strstr(val,pat);
   cout<<"\n"<<n;
   return 0;
}

char* strstr(char *val, char *str)
{
   while(*val !='\0')
   {
      char *pStart=val, *sub = str;
      while(*val && *str && *val == *sub){
         val++;
         sub++;
      }
      if(*sub =='\0')
         return pStart;
      val =pStart+1;
   }
   return NULL;
}