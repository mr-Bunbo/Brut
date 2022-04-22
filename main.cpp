#include <iostream>
#include <string>


char ascii()
{
	using namespace std;
	char ascii_l[255];
	cout<<"id"<<"\t"<<"char"<<endl;
	for (int i = 0; i<255; i++)
	{
		ascii_l[i] = char(i);
		cout<<i<<"\t"<<char(i)<<endl;
	}
	return 0;
}

int brut(ascii_l, passwd, accept)
{
	for (int i = 0; i<254; i++)
	{
		for (int j = 0; j<254; j++)
		{
			for (int k = 0; k<254; k++)
			{
				accept[0] = ascii_l[i];
				accept[1] = ascii_l[j];
				accept[2] = ascii_l[k];
				if ((accept[0] == ascii_l[0]) and (accept[1] == ascii_l[1]) and (accept[2] == ascii_l[2]))
				{
					cout<<"Password is find!";
					break;
				}
			}
			if ((accept[0] == ascii_l[0]) and (accept[1] == ascii_l[1]) and (accept[2] == ascii_l[2]))
				{
					cout<<"Password is find!";
					break;
				}
		}
		if ((accept[0] == ascii_l[0]) and (accept[1] == ascii_l[1]) and (accept[2] == ascii_l[2]))
				{
					cout<<"Password is find!";
					break;
				}
	}
	return 0;
}

int main() 
{
	using namespace std;
	char passwd[3];
	char accept[3];
	for (int i =0; i<3; i++)
	{
		cin>>passwd[i];
	}
	ascii();
	brut(ascii_l, passwd, accept);
	return 0;
}
