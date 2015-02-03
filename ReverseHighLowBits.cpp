#include <iostream>
#include<string.h>
using namespace std;
/*
http://leetcode.com/2011/08/reverse-bits.html
Reverse bits of an unsigned integer.
*/
int SwapBits(int val, int i, int j)
{
   int low = (val>>i) & 1;
   int high = (val>>j) & 1
      if(low^high)
      {
         val ^= ((1U<<low)|(1U <<high));
      }
      return val;
}
int ReverseBits(int val)
{
   int n = sizeof(int) *8;
   for(int i=0;i<n;i++)
      val = SwapBits(val,i,n-i-1);
}

int main() {

   int val =9;
   cout<<ReverseBits(val);
   return 0;
}


