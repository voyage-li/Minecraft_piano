#include <bits/stdc++.h>

std::map<std::string, int> map[8];
void initial()
{
    map[0]["La"] = 0;
    map[0]["Te"] = 1;
    map[0]["Ti"] = 2;
    map[0]["Do"] = 87;
    for (int i = 1; i < 7; i++)
    {
        map[i]["Do"] = (i - 1) * 12 + 3;
        map[i]["Ra"] = (i - 1) * 12 + 4;
        map[i]["Re"] = (i - 1) * 12 + 5;
        map[i]["Me"] = (i - 1) * 12 + 6;
        map[i]["Mi"] = (i - 1) * 12 + 7;
        map[i]["Fa"] = (i - 1) * 12 + 8;
        map[i]["Fi"] = (i - 1) * 12 + 9;
        map[i]["So"] = (i - 1) * 12 + 10;
        map[i]["Le"] = (i - 1) * 12 + 11;
        map[i]["La"] = (i - 1) * 12 + 12;
        map[i]["Te"] = (i - 1) * 12 + 13;
        map[i]["Ti"] = (i - 1) * 12 + 14;
    }
}

void setblock(int a, int b, int c, int piano, int time)
{
    if (b == 36)
        std::cout << "setblock " << a << " " << b << " " << c << " minecraft:command_block[facing=up]"
                  << "{Command:\"summon falling_block -293 45 " << piano << " {BlockState:{Name:\\\"minecraft:redstone_block\\\"},Time:" << time << "}\"} destroy" << std::endl;
    else
        std::cout << "setblock " << a << " " << b << " " << c << " minecraft:chain_command_block[facing=up]"
                  << "{auto:1,Command:\"summon falling_block -293 45 " << piano << " {BlockState:{Name:\\\"minecraft:redstone_block\\\"},Time:" << time << "}\"} destroy" << std::endl;
}

int x = -333;
int h = 36;
int y = 87;

void next()
{
    if (x == -363)
    {
        x = -333;
        y--;
    }
    else
    {
        x--;
    }
}

void tick()
{
    next();
    next();
    next();
    next();
    next();
    next();
}

int main()
{
    std::cout << "fill -333 36 87 -363 40 0 minecraft:air" << std::endl;
    initial();
    // 1
    setblock(x, h, y, map[5]["La"], 30);
    tick();
    setblock(x, h, y, map[5]["Ti"], 30);
    tick();
    // 2
    setblock(x, h, y, map[3]["La"], 30);
    setblock(x, h + 1, y, map[6]["Do"], 30);
    tick();
    setblock(x, h, y, map[4]["Mi"], 30);
    tick();
    setblock(x, h, y, map[4]["La"], 30);
    tick();
    setblock(x, h, y, map[5]["Ti"], 30);
    tick();
    setblock(x, h, y, map[3]["Fa"], 30);
    setblock(x, h + 1, y, map[5]["La"], 30);
    tick();
    setblock(x, h, y, map[4]["Do"], 30);
    tick();
    setblock(x, h, y, map[4]["Fa"], 30);
    tick();
    setblock(x, h, y, map[5]["So"], 30);
    tick();
    // 3
    setblock(x, h, y, map[3]["Do"], 30);
    setblock(x, h + 1, y, map[5]["Mi"], 30);
    tick();
    setblock(x, h, y, map[3]["So"], 30);
    tick();
    setblock(x, h, y, map[4]["Do"], 30);
    setblock(x, h + 1, y, map[5]["So"], 30);
    tick();
    setblock(x, h, y, map[3]["So"], 30);
    setblock(x, h + 1, y, map[5]["Re"], 30);
    tick();
    setblock(x, h, y, map[4]["Re"], 30);
    tick();
    setblock(x, h, y, map[4]["So"], 30);
    tick();
    setblock(x, h, y, map[5]["Do"], 30);
    tick();
    // 4
    setblock(x, h, y, map[3]["La"], 30);
    setblock(x, h + 1, y, map[6]["Do"], 30);
    tick();
    setblock(x, h, y, map[4]["Mi"], 30);
    tick();
    setblock(x, h, y, map[4]["La"], 30);
    tick();
    setblock(x, h, y, map[5]["Ti"], 30);
    tick();
    setblock(x, h, y, map[3]["Fa"], 30);
    setblock(x, h + 1, y, map[5]["La"], 30);
    tick();
    setblock(x, h, y, map[4]["Do"], 30);
    tick();
    setblock(x, h, y, map[4]["Fa"], 30);
    tick();
    setblock(x, h, y, map[5]["So"], 30);
    tick();
    // 5
    setblock(x, h, y, map[3]["La"], 30);
    setblock(x, h + 1, y, map[5]["Mi"], 30);
    tick();
    setblock(x, h, y, map[3]["So"], 30);
    tick();
    setblock(x, h, y, map[4]["Do"], 30);
    setblock(x, h + 1, y, map[5]["So"], 30);
    tick();
    setblock(x, h, y, map[3]["So"], 30);
    setblock(x, h + 1, y, map[5]["Re"], 30);
    tick();
    setblock(x, h, y, map[4]["Re"], 30);
    tick();
    setblock(x, h, y, map[4]["So"], 30);
    tick();
    setblock(x, h, y, map[5]["Do"], 30);
    tick();
    // 6
    setblock(x, h, y, map[3]["La"], 30);
    setblock(x, h + 1, y, map[6]["Do"], 30);
    tick();
    setblock(x, h, y, map[4]["Mi"], 30);
    tick();
    setblock(x, h, y, map[4]["La"], 30);
    tick();
    setblock(x, h, y, map[5]["Ti"], 30);
    tick();
    setblock(x, h, y, map[3]["Fa"], 30);
    setblock(x, h + 1, y, map[5]["La"], 30);
    tick();
    setblock(x, h, y, map[4]["Do"], 30);
    tick();
    setblock(x, h, y, map[4]["Fa"], 30);
    tick();
    setblock(x, h, y, map[5]["So"], 30);
    tick();
    // 7
    setblock(x, h, y, map[3]["Do"], 30);
    setblock(x, h + 1, y, map[5]["Mi"], 30);
    tick();
    setblock(x, h, y, map[3]["So"], 30);
    tick();
    setblock(x, h, y, map[4]["Do"], 30);
    setblock(x, h + 1, y, map[5]["So"], 30);
    tick();
    setblock(x, h, y, map[3]["So"], 30);
    setblock(x, h + 1, y, map[5]["Re"], 30);
    tick();
    setblock(x, h, y, map[4]["Re"], 30);
    tick();
    setblock(x, h, y, map[4]["So"], 30);
    setblock(x, h + 1, y, map[5]["Do"], 30);
    tick();
    setblock(x, h, y, map[4]["Ti"], 30);
    tick();
    // 8
    setblock(x, h, y, map[3]["La"], 30);
    setblock(x, h + 1, y, map[5]["Do"], 30);
    tick();
    setblock(x, h, y, map[4]["Mi"], 30);
    tick();
    setblock(x, h, y, map[4]["La"], 30);
    setblock(x, h + 1, y, map[5]["So"], 30);
    tick();
    setblock(x, h, y, map[3]["La"], 30);
    setblock(x, h + 1, y, map[5]["Re"], 30);
    tick();
    setblock(x, h, y, map[4]["Do"], 30);
    tick();
    setblock(x, h, y, map[4]["Fa"], 30);
    tick();
    setblock(x, h, y, map[5]["Do"], 30);
    tick();
    // 9
    setblock(x, h, y, map[3]["La"], 30);
    setblock(x, h + 1, y, map[5]["Re"], 30);
    tick();
    setblock(x, h, y, map[3]["So"], 30);
    tick();
    setblock(x, h, y, map[4]["Do"], 30);
    setblock(x, h + 1, y, map[5]["Mi"], 30);
    tick();
    setblock(x, h, y, map[3]["So"], 30);
    setblock(x, h + 1, y, map[5]["So"], 30);
    tick();
    setblock(x, h, y, map[4]["Re"], 30);
    tick();
    setblock(x, h, y, map[4]["So"], 30);
    setblock(x, h + 1, y, map[5]["La"], 30);
    tick();
    setblock(x, h, y, map[5]["Ti"], 30);
    tick();
    // 10
    setblock(x, h, y, map[3]["La"], 30);
    setblock(x, h + 1, y, map[6]["Do"], 30);
    tick();
    setblock(x, h, y, map[4]["Mi"], 30);
    setblock(x, h + 1, y, map[6]["Re"], 30);
    tick();
    setblock(x, h, y, map[4]["La"], 30);
    setblock(x, h + 1, y, map[5]["Mi"], 30);
    tick();
    setblock(x, h, y, map[5]["Ti"], 30);
    setblock(x, h + 1, y, map[6]["So"], 30);
    tick();
    setblock(x, h, y, map[3]["Fa"], 30);
    setblock(x, h + 1, y, map[5]["La"], 30);
    setblock(x, h + 2, y, map[6]["Do"], 30);
    tick();
    setblock(x, h, y, map[4]["Do"], 30);
    setblock(x, h + 1, y, map[6]["Re"], 30);
    tick();
    setblock(x, h, y, map[4]["Fa"], 30);
    setblock(x, h + 1, y, map[5]["Mi"], 30);
    tick();
    setblock(x, h, y, map[5]["So"], 30);
    setblock(x, h + 1, y, map[6]["So"], 30);
    tick();
    // 11
    setblock(x, h, y, map[3]["Do"], 30);
    setblock(x, h + 1, y, map[5]["Mi"], 30);
    setblock(x, h + 2, y, map[6]["Do"], 30);
    tick();
    setblock(x, h, y, map[3]["So"], 30);
    setblock(x, h + 1, y, map[6]["Re"], 30);
    tick();
    setblock(x, h, y, map[4]["Do"], 30);
    setblock(x, h + 1, y, map[5]["So"], 30);
    setblock(x, h + 2, y, map[6]["Mi"], 30);
    tick();
    setblock(x, h, y, map[6]["So"], 30);
    tick();
    setblock(x, h, y, map[3]["So"], 30);
    setblock(x, h + 1, y, map[5]["Re"], 30);
    setblock(x, h + 2, y, map[6]["Do"], 30);
    tick();
    setblock(x, h, y, map[4]["Re"], 30);
    setblock(x, h + 1, y, map[6]["Re"], 30);
    tick();
    setblock(x, h, y, map[4]["So"], 30);
    setblock(x, h + 1, y, map[6]["Mi"], 30);
    tick();
    setblock(x, h, y, map[5]["Do"], 30);
    setblock(x, h + 1, y, map[6]["So"], 30);
    tick();
    // 12
    return 0;
}