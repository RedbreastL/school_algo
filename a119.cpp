#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	stack <char> s;
	string e;
	int count = 0;
	
	while(cin >> e)
	{
	
		while(!s.empty())
			s.pop();
		
		for(int i=0; i < e.length(); i++)
		{
			if( e[i] == '(')
			{
				s.push(e[i]);
			}
			else
			{
				if(!s.empty())
				{
				s.pop();
				count += 1;
				}
				else
				{
					cout << 0 << "\n";
					return 0;
				}
			}		
		}
		
		if(s.empty() == 1)
		{
			cout << count << "\n";
		}
	}


	return 0;	
}
