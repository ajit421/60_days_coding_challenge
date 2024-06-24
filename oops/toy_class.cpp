#include 'Toysales.h'
#include <iostream>

namespace example {
    class Toy {
        friend void set_sales_id(Toy&, int);
        
    private:
        std::string name;
        int price;
        int id;
        static int counter;
        
    public:
        Toy(std::string, int);
        ~Toy();
        
        void start_playing() const;
        void stop_playing() const;
        
        std::string get_name() const;
        
        void set_price(int);
        int get_price() const;
        int get_id() const;
    };
}

int example::Toy::counter = 0;

example::Toy::Toy(std::string n, int p) : name(n), price(p) {
    id = counter++;
}

example::Toy::~Toy() {
    // Destructor implementation
}

void example::Toy::start_playing() const {
    std::cout << "Started playing with toy " << name << std::endl;
}

void example::Toy::stop_playing() const {
    std::cout << "Stopped playing with toy " << name << std::endl;
}

std::string example::Toy::get_name() const {
    return name;
}

void example::Toy::set_price(int p) {
    price = p;
}

int example::Toy::get_price() const {
    return price;
}

int example::Toy::get_id() const {
    return id;
}
