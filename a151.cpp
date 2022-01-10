#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack <int> s;
	string e;
	
	while(cin >> e)
	{
	
		while(!s.empty())
			s.pop();
			
		for(int i=0; i<e.length(); i++)
		{
			if('0' <= e[i] && e[i] <= '9')
			{
				s.push(int(e[i])-'0');
			}
			else
			{
				int x = s.top();
        s.pop();
        int y = s.top();
        s.pop();
                
				if(e[i] == '+') 
				{
                    s.push(y+x);
				}
				else if(e[i] == '-')
				{
                    s.push(y-x);
				}
				else if(e[i] == '*')
				{
                    s.push(y*x);
				}
				else if(e[i] == '/')
				{
                    s.push(y/x);
				}
				else
				{
                    s.push(y%x);
				}
			}
		}
		cout << s.top() << "\n";
	}
	
	return 0;
}
