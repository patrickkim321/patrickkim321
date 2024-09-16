#include "Dish.hpp"

enum CuisineType{ITALIAN, MEXICAN, CHINESE, INDIAN, AMERICAN, FRENCH, OTHER};

Dish::Dish() {
    name_ = "UNKNOWN";
    ingredients_;
    int prep_time = 0;
    double price = 0.0;
    CuisineType cuisine_type = OTHER;
    
}

Dish::Dish(std::string name, std::string ingredients, int prep_time, double price, CuisineType cuisine_type){
    name_ = name;
    ingredients_ = ingredients; 
    prep_time_ = prep_time;
    price_ = price;
    cuisine_type_ = cuisine_type; 
}
void Dish::setName(const std::string name){
    name_ = name;
}

std::string Dish::getName() const{
    return name_; 
}

void Dish::setIngredients(const std::vector<std::string>& ingredients){
    ingredients_ = ingredients; 
}

std::vector<std::string> Dish::getIngredients(){
    return ingredients_;
}
 void Dish::setPrepTime(const int prep_time){
    prep_time_ = prep_time;
 }

 int Dish::getPrepTime() const{
    return prep_time_;
 }

 double Dish::setPrice(double price) const{
    price_ = price;
 }
 double Dish::getPrice() const{
    return price_; 
}
 void Dish::setCuisineType(CuisineType cuisine_type){
     cuisine_type_ = cuisine_type; 
 }
 
 Dish::CuisineType Dish::getCuisineType() const{
    return cuisine_type_;
    
}

void Dish::display() const{
    std::cout << "Dish Name: " << name_ << std::endl;
    std::cout << "Ingredients:" << ingredients_ << std::endl;
    for(int i = 0; i < ingredients_.size(); i++){
        std::cout << ingredients_[i];
        if(i < ingredients_.size - 1){
            std::cout << ", ";
        }
        else if(ingredients_.empty()){
            std::cout << std::endl;
        }
    }
    std::cout << "Preparation Time: "<< prep_time_ << "minutes" << std::endl;
    std::cout << "Price: $" << price_ << setprecision(2) << std::endl;
    std::cout << "Cuisine Type: " << cuisine_type_ << std::endl;

}
