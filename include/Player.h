#ifndef PLAYER_H // include guard that prevents the file from being included more than once
#define PLAYER_H 

class Player
{
    private:
        int gold;
        int food;

    public:
        Player(double initailGold = 100);
        void addGold(int amount);
        void addFood(int amount);
        void spendGold(int amount);
        void spendFood(int amount);
        int getGold();
        int getFood();
};

#endif // PLAYER_H