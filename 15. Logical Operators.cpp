#include<iostream>

int main()
{
   //Logical operators
     // Logical or  > ||
     // Logical and > &&
     // Logical not > !

   int temperature;
   bool weather=0;

   std::cout<<"Enter the temperature:"<<std::endl;
   std::cin>>temperature;

   /*

   USING TRENARY OPERATOR:

   temperature>0 && temperature<30 ? std::cout<<"good":std::cout<<"bad";
   
   */

    

    if(temperature<30 && temperature>0)         //Using And ( && )
    std::cout<<"The temperature is good \n";

    else if (temperature=31 || temperature>31 ) //Using Or  ( || )
    std::cout<<"The temperature is bad \n";

    if(!weather)                                //Using Not ( ! )
    std::cout<<"The weather is Sunny! \n";
    else
    std::cout<<"The weather is cloudy! \n";




    return 0;
}