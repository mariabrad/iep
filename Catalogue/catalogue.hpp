#include <iostream>
#include <cstring>


class Catalogue{
    public:
    Catalogue(std::string n);
    ~ Catalogue();
    Catalogue(const Catalogue&); 
    Catalogue& operator=(const Catalogue&); 

  
    void show();
    void setContent(const std::string w);
    std::string getContent();
    private:
        std::string content="";  
};