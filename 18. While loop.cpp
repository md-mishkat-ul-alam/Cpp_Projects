#include<iostream>
int main()
{
    std::string name;

    //While loop used to repeat some code 
    //until a condition reamain true
 
    while(name.empty())
    {
    std::cout<<"Enter Your Name:";
    std::getline(std::cin>>std::ws,name);
    }

    
    std::cout<<std::endl;
    std::cout<<"Hello "<<name;
    return 0;
}