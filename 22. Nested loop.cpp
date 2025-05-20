#include<iostream>
int main()
{


    // nested loop is a loop inside another loop

    int row,column;
    char x ='*' ;

    std::cout<<"Enter Rows:\n";
    std::cin>>row;
    std::cout<<"Enter column:\n";
    std::cin>>column;



    for( int i=1;i<=row;i++)
    {   
        for(int j=1;j<=column;j++)
        {
            std::cout<<"x";
        }

        std::cout<<'\n';
    }

    return 0;
}