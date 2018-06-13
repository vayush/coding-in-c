#include <iostream> 
#include <unordered_set>
using namespace std;
char firstRepeating(string str){
	unordered_set<char> h;
	for (int i = 0; i < str.length(); i++)
	{
		char c = str[i];
		if(h.find(c)!= h.end())
			return c;
		else
			h.insert(c);
	}

	return '\0';
}
int main ()
{
    string str = "geeksforgeeks";
    cout << firstRepeating(str);
    return 0;
}
