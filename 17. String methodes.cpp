#include<iostream>

int main()
{
    char clear;
    std::string name,pass;


    label:

    std::cout<<"Enter your Name:\n";
    std::getline(std::cin>>std::ws,name);

    //Empty method
    if(name.empty())
    {std::cout<<"You didn't enter your name!";
    return 0;}

    std::cout<<"Enter your Password:\n";
    std::getline(std::cin>>std::ws,pass);
    

    //Append method
    name.append("@gmail.com");

    
    
    //Length method
    if(pass.length()<8)
    std::cout<<"Password must be at least 8 charecter long!\n";
    
    else
    std::cout<<"Email:"<<name<<"\n";
    std::cout<<"Password:"<<pass<<"\n";


    std::cout<<"Enter c to clear all:\n";
    std::cin>>clear;

    //clear method
    if(clear == 'c' || clear=='C')
    {name.clear();
    pass.clear();
    goto label;}

    else
    {std::cout<<"Invalid input!";
    return 0;}

    std::cout<<"Username:"<<name<<"\n";
    std::cout<<"Password:"<<pass<<"\n";
    
    return 0;

    //Return charecter for a given position
    // std::cout<<name.at(0);

    //Insert a char at a given position
    //name.insert(index,"charecter");

    //Find a charecter
    //name.find('Charecter');

    //Erase some charecter
    //name.erase(Begining index,Ending index);


}