#include<bits/stdc++.h>
using namespace std;
string one [] = {"","ONE ","TWO ","THREE ","FOUR ","FIVE ","SIX ","SEVEN ",
                 "EIGHT ","NINE ","TEN ","ELEVEN ","TWELVE ","THIRTEEN ",
                 "FOURTEEN ","FIFTEEN ","SIXTEEN ","SEVENTEEN ","EIGHTEEN "
                 "NINETEEN "};

string ten [] = {"","","TWENTY ","THIRTY ","FORTY ","FIFTY ","SIXTY "
                  "SEVENTY ","EIGHTY ","NINETY "};

string numToWords(int n, string s)
{
    string str = "";

    if (n > 19)
        str += ten[n / 10] + one[n % 10];
    else
        str += one[n];
 
    
    if (n)
        str += s;
 
    return str;
}

string convertTowords(long int n){
    string out;
    out += numToWords((n/10000000),"CRORE ");

    out += numToWords(((n / 100000) % 100), "LAKH ");

    out += numToWords(((n / 1000) % 100), "THOUSAND ");

    out += numToWords(((n / 100) % 10), "HUNDRED ");

    if (n > 100 && n % 100)
        out += "AND ";

    out += numToWords((n % 100), "");

    return out;

}


int main(){
    long int no  = 113222145;
    cout<<convertTowords(no);

    return 0;
}