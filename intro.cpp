#include <iostream>
#define tax_rate_1 0.15
const double tax_rate_2= tax_rate_1;
int main(){

    std::cout<<"The purpose of this C++ program is to manage and calculate basic details about a product in an inventory system.\n It demonstrates the use of different programming concepts such as variable initialization, user input, flow control, and mathematical calculations.\n The program also illustrates how to use preprocessor directives and constants to manage key values like the tax rate. "<<'\n';
    std::string product_name;
    int product_category, initial_inventory, items_sold;
    float price_per_unit;
    

    

    std::string String_in_it;
    String_in_it="Hello World"; // Direct initialization of string
    
    int direct_in_it{7};// Direct initialization of integer


    float Float_in_it(100.5f);// Direct initialization of float




    std::cout<<"Enter product name: ";
    std::cin>>product_name;

    std::cout<<"Enter product category: ";
    std::cin>>product_category;

    std::cout<<"Enter initial inventory quality: ";
    std::cin>>initial_inventory;

    std::cout<<"Enter product price: ";
    std::cin>>price_per_unit;

    std::cout<<"Number of items sold: ";
    std::cin>>items_sold;

    
    int new_inventory= initial_inventory-items_sold;
    float total_sales= items_sold*price_per_unit;
    std::cout<<"New inventory: "<<new_inventory<<'\n';
    std::cout<<"Total sales: "<<total_sales<<'\n';

    
    std::string inventory_status=(new_inventory<10)? "Low inventory":"Sufficient inventory";
    std::cout<<"inventory status: " <<inventory_status<<'\n';

    auto total_sales_copy= total_sales;
    decltype(initial_inventory)current_inventory=100;


    if(product_category>0 || product_category<6 ){
        switch(product_category){
            case 1:
            std::cout<<"Category 1: Electronics"<<'\n';
            break;
            case 2:
            std::cout<<"Category 2: Groceries"<<'\n';
            break;
            case 3:
            std::cout<<"Category 3: Clothing"<<'\n';
            break;
            case 4:
            std::cout<<"Category 4: Stationery"<<'\n';
            break;
            case 5:
            std::cout<<"Category 5: Miscellaneous"<<'\n';
            break;





        }
    
    }
    else{
        std::cout<<"Please enter valid input";
    }
    for(int i= items_sold;i>=1; i--){
        std::cout<<"items sold= "<<i<<" = "<<price_per_unit<<'\n';
    }
    const double*prTaxRate2= &tax_rate_2;
    const double*prTaxRate1=&tax_rate_2;

    std::cout<<"Tax rate(using const): "<<(*prTaxRate2*100)<<'%'<<'\n';
    std::cout<<"tax rate(using define): "<<(*prTaxRate1*100)<<'%'<<'\n';

    std::cout<<"********PRODUCT DETAIL********"<<'\n';
    std::cout<<"product_name: "<<product_name<<'\n';
    std::cout<< "product_category: "<<product_category<<'\n';
    std::cout<<"initial_inventory: "<<initial_inventory<<'\n';
    std::cout<<"price_per_unit: "<<price_per_unit<<'\n';
    std::cout<<"items_sold: "<<items_sold<<'\n';
    std::cout<< "new_inventory: "<<new_inventory<<'\n';
    std::cout<<"total_sales: "<<total_sales<<'\n';
    std::cout<<"inventory_status: "<<inventory_status<<'\n';
    std::cout<<"current_inventory: "<<current_inventory<<'\n';
    std::cout<<"total_sales_copy: "<<total_sales_copy<<'\n';








    




}