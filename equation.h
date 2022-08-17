#pragma once

#include <string>

class Equation {
public:
    Equation() = delete;
    Equation(const std::string_view& str);
    ~Equation();



private:
    void _reduce();
    void _parse();

private:
    int degree_;
};
