#include <iostream>
using namespace std;

int count_vowels(const char kalimat[])
{
    int vokal; 
    vokal=0;
    for(int i=0;kalimat[i]!='\0';i++)
    {
        if(kalimat[i]=='a' || kalimat[i]=='e' || kalimat[i]=='i' ||
           kalimat[i]=='o' || kalimat[i]=='u' || kalimat[i]=='A' ||
           kalimat[i]=='E' || kalimat[i]=='I' || kalimat[i]=='O' ||
           kalimat[i]=='U')
        {
           vokal++;
        }
    }
    cout << vokal << endl;
    return 0;
}

int main()
{
    count_vowels("programmer");
    count_vowels("hmm..");
}
