#include<iostream>
#include<queue>
using namespace std;

int main()
{
	queue<int> q;
	int N;
	while(cin >> N)
	{
		while(!q.empty())
		{
			q.pop();
		}
		
		int k;
		int x;
		for(int i=0; i<N; i++)
		{
			cin >> k;
			
			if(k==1)
			{
				cin >> x;
				q.push(x);
			}
			else if(k==2)
			{
				if(q.empty())
				{
					cout << -1;
				}
				else
				{
					cout << q.front() << "\n";
				}
			}
			else if(k==3)
			{
				if(!q.empty())
				{
					q.pop();
				}			
			}
		}
		
	}
	
	
	return 0;
}

