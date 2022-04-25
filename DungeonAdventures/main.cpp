#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));

    const int worldSizeY = 20;
    const int worldSizeX = 70;

    char action = -1;

    char map[worldSizeY][worldSizeX];
    char pMap[worldSizeY][worldSizeX];

    int playerPosX = worldSizeX/2;
    int playerPosY = worldSizeY/2;

    for(int y = 0; y < worldSizeY; y++)
    {
        for(int x = 0; x < worldSizeX; x++)
        {
            switch(rand()%15)
            {
                case 1: map[y][x] = 't'; break;
                case 2: map[y][x] = 's'; break;
                default: map[y][x] = '.';
            }
            pMap[y][x] = '*';
        }
    }

    while(true)
    {
        system("cls");
        for(int y = 0; y < worldSizeY; y++)
        {
            for(int x = 0; x < worldSizeX; x++)
            {
                if(y == playerPosY && x == playerPosX)
                    cout << "@";
                else
                    cout << pMap[y][x];
            }
            cout << endl;
        }
        cout << ">";
        cin >> action;
        switch(action)
        {
            case 'w': if(map[playerPosY-1][playerPosX] == '.') playerPosY--; break;
            case 's': if(map[playerPosY+1][playerPosX] == '.')playerPosY++; break;
            case 'a': if(map[playerPosY][playerPosX-1] == '.')playerPosX--; break;
            case 'd': if(map[playerPosY][playerPosX+1] == '.')playerPosX++; break;
        }
        pMap[playerPosY-1][playerPosX] = map[playerPosY-1][playerPosX];
        pMap[playerPosY+1][playerPosX] = map[playerPosY+1][playerPosX];
        pMap[playerPosY][playerPosX-1] = map[playerPosY][playerPosX-1];
        pMap[playerPosY][playerPosX+1] = map[playerPosY][playerPosX+1];
        pMap[playerPosY-1][playerPosX-1] = map[playerPosY-1][playerPosX-1];
        pMap[playerPosY-1][playerPosX+1] = map[playerPosY-1][playerPosX+1];
        pMap[playerPosY+1][playerPosX-1] = map[playerPosY+1][playerPosX-1];
        pMap[playerPosY+1][playerPosX+1] = map[playerPosY+1][playerPosX+1];
    }
    return 0;
}
