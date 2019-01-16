//
//  main.cpp
//  Practical3
//
//  Created by Laura Walsh on 13/11/2018.
//  Copyright © 2018 Laura Walsh. All rights reserved.
//

#include <iostream>
#include "Person.hpp"
//Testing the functionality of the created classes

int main(){
    
    //testing basic getters and setters
    Person p1( "Laura", "Walsh", "123", 1999);
    
    std::cout << p1.get_birth_year() << std::endl;
    
    Person p2;
    
    p2.set_family_name("Smith");
    
    std::cout << p2.get_family_name() << std::endl;
    
    //testing a "person" in dynamic allocation
    Person* p3 = new Person("Ellie", "Walsh", "33", 2002);
    std::cout << "p3: " << p3->get_ID_number() << std::endl;
    
    delete p3;
    
    //testing an array of "people" in dynamic allocation
    Person* pArr = new Person[385];
    
    pArr[13].set_given_name("Katie");
    std::cout << pArr[13].get_given_name() << std::endl;
    
    //testing default constructor
    std::cout << pArr[13].get_birth_year() << std::endl;
    
    delete[] pArr;
    
    return 0;
}
