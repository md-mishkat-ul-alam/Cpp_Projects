#include<iostream>

int main()
{
    int grade=21;

    /*if(grade>=33)
    std::cout<<"Pass";

    else
    std::cout<<"fail";*/

    //Trenary operator
    // Condition ? if : else ;
    
    grade >= 33 ? std::cout<<"pass"    :  std::cout<<"fail";


    return 0;
}