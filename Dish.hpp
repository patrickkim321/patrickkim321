/*
Patrick Kim
Patrick.kim95@myhunter.cuny.edu
Project 1

*/

#ifndef DISH_HPP
#define DISH_HPP

class Dish{
    public: 
    enum class CuisineType{ITALIAN, MEXICAN, CHINESE, INDIAN, AMERICAN, FRENCH, OTHER};
  
    Dish();
    Dish(std::string name_, std::string ingredients, int prep_time, double price);

    void setName(const std::string name_);

    std::string getName() const;

    void setIngredients(std::string ingredients_);

    std::string getIngredients() const;

    void setPrepTime(int prep_time);
    
    int getPrepTime() const;
    
    double setPrice(double price);

    double getPrice() const;
    
    void setCuisineType(CuisineType cuisine_type);

    std::string getCuisineType() const;
    
    void display() const;
    
    private:
    std::string name_;
    std::vector<std::string> ingredients_; 
    int prep_time_;
    double price_;
    CuisineType cuisine_type_; 
};
#endif