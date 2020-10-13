#include <iostream>
using namespace std;

//author: Anshul Verma
//date: 13/10/2020

//Time Complexity: O(N*N)
//Space Complexity: O(1)

void printPattern(int n)
{
	for(int i = 1; i <= n; i++)
    {
    	for(int k = 1; k < i; k++) cout << ' ';
        for(int j = i; j <= n; j++) cout << j << ' ';
        cout << '\n';
    }
    for(int i = n-1; i > 0; i--)
    {
    	for(int k = i-1; k > 0; k--) cout << ' ';
    	for(int j = i; j <= n; j++) cout << j << ' ';
        cout << '\n';
    }

}

int main()
{
    printPattern(7);
    //printPattern(3);
    //printPattern(9);
    return 0;
}

//Output
/*
1 2 3 4 5 6 7 
 2 3 4 5 6 7 
  3 4 5 6 7 
   4 5 6 7 
    5 6 7 
     6 7 
      7 
     6 7 
    5 6 7 
   4 5 6 7 
  3 4 5 6 7 
 2 3 4 5 6 7 
1 2 3 4 5 6 7
*/