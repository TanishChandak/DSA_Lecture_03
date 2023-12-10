#include<iostream>
using namespace std;

int main()
{
    //if-else statements:
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    if (a>0){
        cout<<"You entered positive number."<<endl;
    }
    else if(a == 0){
        cout<<"Zero is neither positive nor negative."<<endl;
    }
    else{
        cout<<"You entered negative number."<<endl;
    }

    int b = 24;

    if(b > 20){
        cout<<"Love";
    }
    else if(b == 20){
        cout<<"Lovely";
    }
    else{
        cout<<"Tanish";
    }

    char c;
    cout<<"Enter the char value : ";
    cin>>c;

    if(c >= 'a' && c <= 'z')
    {
        cout<<"It's an LowerCase";
    }
    else if(c >= 'A' && c <= 'Z')
    {
        cout<<"It's an UpperCase";
    }
    else
    {
        cout<<"It's an Number";
    }

    //while loop 
    int num;
    cout<<"Enter the num of value: ";
    cin>>num;

    int i = 1;
    while(i <= num)
    {
        cout<<i<<" "<<endl;
        i = i + 1;
    }

    // sum of all even numbers:
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int sum = 0;
    int j = 1;
    while(j <= n)
    {
        if(j % 2 == 0)
        {
            sum = sum + j;
        }
        j = j + 1;
    }
    cout<<"The total sum is: "<<sum<<endl;

    //Fahrenheit to celsius:
    int fah;
    cout<<"Enter the fahrenheit value: ";
    cin>>fah;

    int cel;
    cel = (fah - 32) * 5/9;
    cout<<"the celsius value is: "<<cel<<endl;

    //Checking prime or not prime:
    int num;
    cout<<"Enter the num value: ";
    cin>>num;

    int i = 2;
    while(i < num)
    {
        if(num % i == 0)
        {
            cout<<"The Entered number is: "<<i<<" is not prime."<<endl;
        }
        else
        {
            cout<<"The Entered number is: "<<i<<" is prime."<<endl;
        }
        i = i + 1;
    }
}

