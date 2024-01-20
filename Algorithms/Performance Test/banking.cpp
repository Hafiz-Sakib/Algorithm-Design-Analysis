/* C++ program to print a given number in words.
The program handles till 9 digits numbers and
can be easily extended to 20 digit number */
#include <iostream>
using namespace std;

// strings at index 0 is not used, it is to make array
// indexing simple
string one[] = {"", "One ", "Two ", "Three ", "Four ",
                "Five ", "Six ", "Seven ", "Eight ",
                "Nine ", "Ten ", "Eleven ", "Twelve ",
                "Thirteen ", "Fourteen ", "Fifteen ",
                "Sixteen ", "Seventeen ", "Eighteen ",
                "Nineteen "};

// strings at index 0 and 1 are not used, they are to
// make array indexing simple
string ten[] = {"", "", "Twenty ", "Thirty ", "Forty ",
                "Fifty ", "Sixty ", "Seventy ", "Eighty ",
                "Ninety "};

// n is 1- or 2-digit number
string numToWords(int n, string s)
{
    string str = "";
    // if n is more than 19, divide it
    if (n > 19)
        str += ten[n / 10] + one[n % 10];
    else
        str += one[n];

    // if n is non-zero
    if (n)
        str += s;

    return str;
}

// Function to print a given number in words
string convertToWords(long n)
{
    // stores word representation of given number n
    string out;

    // handles digits at ten millions and hundred
    // millions places (if any)
    out += numToWords((n / 10000000), "Crore ");

    // handles digits at hundred thousands and one
    // millions places (if any)
    out += numToWords(((n / 100000) % 100), "Lakh ");

    // handles digits at thousands and tens thousands
    // places (if any)
    out += numToWords(((n / 1000) % 100), "Thousand ");

    // handles digit at hundreds places (if any)
    out += numToWords(((n / 100) % 10), "Hundred ");

    if (n > 100 && n % 100)
        out += "and ";

    // handles digits at ones and tens places (if any)
    out += numToWords((n % 100), "");

    // Handling the n=0 case
    if (out == "")
        out = "zero";

    return out;
}

// Driver code
int main()
{
    // long handles upto 9 digit no
    // change to unsigned long long int to
    // handle more digit number
    long old = 1203221;
    long New = 1303221;
    long cdt = 100000;
    // ten lakh twenty three thousand two hundred and twenty one
    // convert given number in words
    cout << "Difference = " << New - old << endl;
    cout << "Credited = " << convertToWords(cdt) << endl;
    cout << "Current Balance = " << convertToWords(New) << endl;

    return 0;
}