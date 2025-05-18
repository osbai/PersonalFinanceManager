#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>

class Category {
public:
    Category(const std::string& name);

    std::string getName() const;

private:
    std::string name;
};

#endif // CATEGORY_H
