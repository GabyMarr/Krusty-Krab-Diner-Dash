#pragma once

#include "Item.h"
#include "BaseCounter.h"

class StoveCounter: public BaseCounter {
    private:
        Item *item;
        int stoveTimer = 95;
        int clock = 0;
        bool cooked = false;
  
    public:
        StoveCounter(int x, int y, int width, int height, Item* item, ofImage sprite);
        virtual void showItem();
        void tick();
        bool isCooked();
        void setNewIngredient();
        int getStoveTimer();
        int getClock();

};

