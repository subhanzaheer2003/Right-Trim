#include<iostream>
#include<string>
using namespace std;
string rtrim(string& s, char c)
{
	string::iterator p;
	for (p = s.end(); p != s.begin() && *--p == c;);
	if (*p != c)p++;
	s.erase(p, s.end());
	return s;
}