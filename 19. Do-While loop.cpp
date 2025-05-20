#include<iostream>
int main()
{
    int number;

    //do-while loop run the code first
    //then repeat it if the condition remain true

    do
    {
    std::cout<<"Please Enter a positive number:";
    std::cin>>number;
    }
    while(number<0);

    
    
    std::cout<<"The Number is: "<<number;
    return 0;
}