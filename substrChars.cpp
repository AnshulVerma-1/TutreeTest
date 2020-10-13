#include <iostream>
#include <vector>
using namespace std;


//author: Anshul Verma
//date: 13/10/2020

//Time Complexity: O(A.length())
//Space Complexity: O(1)

bool checkFreq(int bFreq[], int tempFreq[])
{
	for(int i = 0; i < 100; i++)
	{
		if(bFreq[i] != tempFreq[i]) return false;
	}
	return true;
}

vector<int> getSubstrInd(string &A, string &B)
{
	vector<int> res;
	if(B.length() > A.length()) return res;
	int bFreq[100] = {0};
	int tempFreq[100] = {0};
	for(int i = 0; i < B.length(); i++) bFreq[B[i] - 'A']++;
	for(int i = 0; i < B.length(); i++) tempFreq[A[i] - 'A']++;
	if(checkFreq(bFreq, tempFreq)) res.push_back(0);
	for(int i = 0; i < A.length() - B.length(); i++)
	{
		tempFreq[A[i] - 'A']--;
		tempFreq[A[i + B.length()] - 'A']++;
		if(checkFreq(bFreq, tempFreq)) res.push_back(i+1);
	}
	return res;
}

int main()
{
	string str1 = "XYYZXZYZXXYZ";
	string str2 = "XYZ";
	vector<int> res = getSubstrInd(str1, str2);
	for(int ind : res) cout << "substring " << str1.substr(ind, str2.length()) << " is present at index " << ind << '\n';
	return 0;
}

//Output
/*
substring YZX is present at index 2
substring XZY is present at index 4
substring YZX is present at index 6
substring XYZ is present at index 9
*/