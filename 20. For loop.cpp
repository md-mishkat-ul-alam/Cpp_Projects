#include<iostream>
int main()
{
    int number;

    //for loop used to repeat the code
    //for a certain number of time
    
    std::cout<<"Enter a number:";
    std::cin>>number;

    for( int i=1;i<=10;i++)
    {
        std::cout<<number<<" x "<<i<<" = " <<number*i<<'\n';

    }

    return 0;
}