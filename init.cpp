#include <bits/stdc++.h>
void under(int pos)
{
}

void wkey(int pos)
{
    std::cout << "fill -294 21 " << pos << " -303 21 " << pos << " minecraft:quartz_block replace" << std::endl;
    std::cout << "fill -293 19 " << pos << " -301 19 " << pos << " minecraft:quartz_block replace" << std::endl;
    std::cout << "setblock -293 18 " << pos << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"/fill ~-1 ~3 ~ ~-10 ~3 ~ minecraft:quartz_slab\"} replace" << std::endl;
    std::cout << "setblock -297 20 " << pos << " minecraft:command_block[facing=down]{Command:\"/fill ~3 ~1 ~ ~-6 ~1 ~ minecraft:quartz_block\"} replace" << std::endl;
}
void bkey(int pos)
{
    std::cout << "fill -294 22 " << pos << " -299 22 " << pos << " minecraft:black_concrete replace" << std::endl;
    std::cout << "fill -294 21 " << pos << " -299 21 " << pos << " minecraft:black_concrete replace" << std::endl;
    std::cout << "fill -300 21 " << pos << " -303 21 " << pos << " minecraft:quartz_block replace" << std::endl;
    std::cout << "fill -293 19 " << pos << " -301 19 " << pos << " minecraft:quartz_block replace" << std::endl;
    std::cout << "setblock -293 18 " << pos << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"/fill ~-1 ~4 ~ ~-6 ~4 ~ minecraft:air\"} replace" << std::endl;
    std::cout << "setblock -297 20 " << pos << " minecraft:command_block[facing=down]{Command:\"/fill ~3 ~2 ~ ~-2 ~2 ~ minecraft:black_concrete\"} replace" << std::endl;
}
int main()
{
    wkey(0);
    bkey(1);
    int i = 2;
    while (i < 86)
    {
        wkey(i++);
        wkey(i++);
        bkey(i++);
        wkey(i++);
        bkey(i++);
        wkey(i++);
        wkey(i++);
        bkey(i++);
        wkey(i++);
        bkey(i++);
        wkey(i++);
        bkey(i++);
    }
    wkey(86);
    wkey(87);
    for (int i = 0; i < 88; i++)
    {
        std::cout << "setblock -294 20 " << i << " minecraft:repeater[facing=east] replace" << std::endl;
        std::cout << "setblock -295 20 " << i << " minecraft:repeater[facing=east] replace" << std::endl;
        std::cout << "setblock -296 20 " << i << " minecraft:repeater[facing=east] replace" << std::endl;
        std::cout << "setblock -293 19 " << i << " minecraft:command_block[facing=down]{Command:\"/playsound minecraft:piano." << i + 21 << " voice @p ~ ~ ~ 30\"} replace" << std::endl;
        std::cout << "setblock -293 17 " << i << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"/fill ~ ~3 ~ ~ ~3 ~ minecraft:air\"} replace" << std::endl;
    }
    return 0;
}