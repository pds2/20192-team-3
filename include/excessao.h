#ifndef _EXCESSAO_H
#define _EXCESSAO_H

#include <stdexcept>
#include <exception>

class Excessao : public std::exception {
    
    public:
    
    Excessao();
    
    virtual const char* what() const throw() override;
};

#endif