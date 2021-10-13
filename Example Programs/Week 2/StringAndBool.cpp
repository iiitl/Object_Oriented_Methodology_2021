#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s1 = "This is a string";
	string s2 = "... and this is another string";
	string s3 = s1+s2; // '+' here means concatenation
	cout<<"s1 = "<<s1<<endl;
	cout<<"s2 = "<<s2<<endl;
	cout<<"s3 = s1 + s2 = "<<s3<<endl;
	bool b1 = s1 == s2;
	cout<<"s1 == s2 ? "<<b1<<endl;
	bool b2 = s3 == (s1 + s2);
	cout<<"s3 == (s1 + s2) ? "<<b2<<endl;
	// Let us change s3 slightly
	s3[0] = 't';
	cout<<"New s3 = "<<s3<<endl;
	b2 = s3 == (s1 + s2);
	cout<<"s3 == (s1 + s2) ? "<<b2<<endl;
}
