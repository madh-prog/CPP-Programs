/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
fstream myfile;
myfile.open("file.txt",ios::in);
//myfile.good();
if(!myfile)
{
	
	cout<<"The file cannot open"<<endl;
}
}*/

/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream input;
	string str;
	input.open("file.txt");
	if(!input)
		cout<<"file did not open";
	else
	{
		while(input>>str)
		{
			cout<<str<<" "<<endl;
		}
	}
}*/


/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream input;
	string str;
	input.open("file.txt");
	if(!input)
		cout<<"file did not open";
	else
	{
		while(getline(input,str))
		{
			cout<<str<<" "<<endl;
		}
	}
}*/

/*counting line

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fin;
	fin.open("file.txt");
	int count =0;
	char word[30];
	if(!fin)
		cout<<"file did not open";
	else
	{
		while(fin>>word)
		{
			count++;
		}
	}
	cout<<"Total words: "<<count<<endl;
	fin.close();
}*/

/*counting line

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fin;
	fin.open("file.txt");
	int count=0;
	string str;
	if(!fin)
		cout<<"file did not open";
	else
	{
		while(getline(fin,str))
		{
			count++;
		}
	}
	cout<<"Total line: "<<count<<endl;
	fin.close();
}*/

/*To copy content character by character

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fin,fout;
	fin.open("file.txt");
	fout.open("file1.txt",ios::app);
	char ch;
	while(!fin.eof())
	{
		fin.get(ch);
		fout<<ch;
	}
	cout<<"Copy Done! "<<endl;
	fin.close();
	fout.close();
}*/
