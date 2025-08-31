#pragma once
#include <iostream>
#include <vector>

class Inventory {
public:
    void addItem(const std::string& item);
    bool hasItem(const std::string& item) const;
private:
    std::vector<std::string> items;
};