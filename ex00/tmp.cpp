// ScalarConverter.cpp
#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>
#include <cmath>
#include <cctype>

void ScalarConverter::convert(const std::string& literal) {
    // Определение типа литерала
    enum Type { CHAR, INT, FLOAT, DOUBLE, INVALID };
    Type detectedType = INVALID;

    double value = 0.0;

    // Функция для проверки, является ли строка псевдо-литералом
    auto isPseudoLiteral = [&](const std::string& s) -> bool {
        return (s == "nan" || s == "+nan" || s == "-nan" ||
                s == "inf" || s == "+inf" || s == "-inf" ||
                s == "nanf" || s == "+nanf" || s == "-nanf" ||
                s == "inff" || s == "+inff" || s == "-inff");
    };

    // Проверка на char
    if (literal.length() == 3 && literal.front() == '\'' && literal.back() == '\'') {
        detectedType = CHAR;
        value = static_cast<double>(literal[1]);
    }
    // Проверка на псевдо-литералы
    else if (isPseudoLiteral(literal)) {
        if (literal.find('f') != std::string::npos)
            detectedType = FLOAT;
        else
            detectedType = DOUBLE;

        if (literal.find("nan") != std::string::npos)
            value = std::numeric_limits<double>::quiet_NaN();
        else if (literal.find("+inf") != std::string::npos)
            value = std::numeric_limits<double>::infinity();
        else if (literal.find("-inf") != std::string::npos)
            value = -std::numeric_limits<double>::infinity();
    }
    // Проверка на float (заканчивается на 'f')
    else {
        size_t len = literal.length();
        if (literal.back() == 'f' || literal.back() == 'F') {
            std::string floatStr = literal.substr(0, len - 1);
            std::stringstream ss(floatStr);
            float f;
            ss >> f;
            if (ss && ss.eof()) {
                detectedType = FLOAT;
                value = static_cast<double>(f);
            }
        }
    }

    // Если тип еще не определен, пробуем int и double
    if (detectedType == INVALID) {
        // Проверка на int
        std::stringstream ssInt(literal);
        int i;
        ssInt >> i;
        if (ssInt && ssInt.eof()) {
            detectedType = INT;
            value = static_cast<double>(i);
        }
        else {
            // Проверка на double
            std::stringstream ssDouble(literal);
            double d;
            ssDouble >> d;
            if (ssDouble && ssDouble.eof()) {
                detectedType = DOUBLE;
                value = d;
            }
        }
    }

    // Если тип все еще не определен, это недействительный литерал
    if (detectedType == INVALID) {
        std::cerr << "Error: Invalid literal format." << std::endl;
        return;
    }

    // Теперь выводим результаты конвертации
    // 1. char
    std::cout << "char: ";
    if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max()) {
        std::cout << "impossible" << std::endl;
    }
    else {
        char c = static_cast<char>(value);
        if (std::isprint(static_cast<unsigned char>(c)))
            std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }

    // 2. int
    std::cout << "int: ";
    if (std::isnan(value) || std::isinf(value) ||
        value < static_cast<double>(std::numeric_limits<int>::min()) ||
        value > static_cast<double>(std::numeric_limits<int>::max())) {
        std::cout << "impossible" << std::endl;
    }
    else {
        int i = static_cast<int>(value);
        std::cout << i << std::endl;
    }

    // 3. float
    std::cout << "float: ";
    {
        float fl = static_cast<float>(value);
        std::cout << std::fixed << std::setprecision(1) << fl;
        if (std::isnan(fl))
            std::cout << "f";
        else if (std::isinf(fl)) {
            if (fl > 0)
                std::cout << "f";
            else
                std::cout << "f";
        }
        else
            std::cout << "f";
        std::cout << std::endl;
    }

    // 4. double
    std::cout << "double: ";
    {
        double d = value;
        std::cout << std::fixed << std::setprecision(1) << d;
        std::cout << std::endl;
    }
}
