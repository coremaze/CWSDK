#ifndef ITEM_H
#define ITEM_H

#include "Spirit.h"

namespace cube {
class Item {
    public:
        char category;
        char field_1;
        char field_2;
        char field_3;
        int id;
        unsigned int modifier;
        int region;
        int field_10;
        char rarity;
        int formula_category;
        char material;
        cube::Spirit spirits[32];
        char num_spirits;
        char field_9E;
        char field_9F;

        Item();
        Item(char category, int id);
    };
}

#endif // ITEM_H
