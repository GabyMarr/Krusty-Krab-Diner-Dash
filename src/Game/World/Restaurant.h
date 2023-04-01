//
// Created by joshu on 11/3/2020.
//
#pragma once

#include "BaseCounter.h"
#include "EntityManager.h"
#include "Player.h"
#include "ofMain.h"

class Restaurant {
    private:
        Player* player;
        EntityManager* entityManager;
        int ticks=0;
        unordered_map<Item*, int> pricedItem;
        std::vector<ofImage> people;
        int money = 0;
        
    public:
        Restaurant();
        Player* getPlayer();
        void setPlayer(Player *player);
        Item* cheese;
        Item* lettuce;
        Item* tomato;
        Item* patty;
        Item* botBread;
        Item* topBread;
        ofImage floor;
        ofImage cockroach;
        ofImage krusty_krab_background;
        ofImage blue_orchid;
        ofImage pink_orchid;
        ofImage burger_background;
        void initItems();
        void initCounters();
        void initClients();
        void generateClient();
        void serveClient();
        void tick();
        void render();
        void keyPressed(int key);
        int getMoney(){return money;}
        int restaurant_getPL(){
            return entityManager->getPL();
        }
};
