#include<iostream>
int main()
{
    int number;

    // break = break out of a loop
    // continue = skip current interaction

    for( int i=1;i<=10;i++)
    {   
        if(i == 7)
        {
            continue;
        }
        std::cout<<i<<'\n';

    }

    return 0;
}