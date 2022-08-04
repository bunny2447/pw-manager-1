
//============================================================================
// Name        : Main.cpp
// Author      : AAron Metcalfe
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : password manager in c++
//============================================================================

#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <cstdlib>

//   std::cout << "" << std::endl;  


int main(){

    std::string Username;
    std::string Password;

    std::string option_one;
    std::string option_two;

    //create a intro to the program 

    //if the user name and password is not correct get user to re try else processed to next step
    std::cout << "Welcome to the password manager!" << std::endl;
    std::cout << "Please Log In" << std::endl;
    std::cout << "User Name" << std::endl;   
    std::cin >> option_one;
    std::cout << "Password" << std::endl; 
    std::cin >> option_two;

      


    std::cout << "Loged in" << std::endl; 
        
       
       
    std::cout << option_one;
    std::cout << option_two;
    // ask them to log in with user name and password or to create and account
    // if they enter the correct user name and password, they will be able to access the program
    // if they enter the wrong user name or password, they will be able to try again
    // if they enter the wrong user name and password, they will be able to try again


}