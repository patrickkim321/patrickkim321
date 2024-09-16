#include "Dish.hpp"
#include <iostream>
#include <vector>
#include <string>

int main(){
    Dish Dish1;
    Dish1.setPrepTime(30);
    Dish1.setPrice(9.99);

    Dish1.display();
    std::cout<<std::endl;

    std::vector<std::string> ingredients ={"Pasta", "Eggs", "Pancetta", "Parmesan", "Pepper"};

    

}
