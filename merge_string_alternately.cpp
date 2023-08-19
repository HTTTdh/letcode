#include<iostream>
#include<cstring>
using namespace std;
string merge;
    string adjust(string s)
    {
        s.erase(0,1);
        return s;
    }
    string mergeAlternately(string word1, string word2) {
        int length_1=word1.length();
        int length_2=word2.length();
        if (length_1!=0 || length_2!=0)
        {
            merge=merge+ word1[0] +word2[0];
            length_1-=1;
            length_2-=1;
            cout<<length_1;
            cout<<length_2;
            word1=adjust(word1);
            word2=adjust(word2);
            mergeAlternately(word1,word2);
            
        }
        return merge;
    }
int main()
{
    string word1="ab";
    string word2="pqrs";
    cout<<mergeAlternately(word1,word2);
}