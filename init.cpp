#include <bits/stdc++.h>
void under(int pos)
{
}

void wkey(int pos)
{
    std::cout << "fill -294 21 " << pos << " -303 21 " << pos << " minecraft:quartz_block destroy" << std::endl;
    std::cout << "fill -293 19 " << pos << " -301 19 " << pos << " minecraft:quartz_block destroy" << std::endl;
    // std::cout << "setblock -293 18 " << pos << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"/fill ~-1 ~3 ~ ~-10 ~3 ~ minecraft:quartz_slab\"} destroy" << std::endl;
    std::cout << "setblock -297 20 " << pos << " minecraft:command_block[facing=down]{Command:\"function draw:release\"} destroy" << std::endl;
}
void bkey(int pos)
{
    std::cout << "fill -294 22 " << pos << " -299 22 " << pos << " minecraft:black_concrete destroy" << std::endl;
    std::cout << "fill -294 21 " << pos << " -299 21 " << pos << " minecraft:black_concrete destroy" << std::endl;
    std::cout << "fill -300 21 " << pos << " -303 21 " << pos << " minecraft:quartz_block destroy" << std::endl;
    std::cout << "fill -293 19 " << pos << " -301 19 " << pos << " minecraft:quartz_block destroy" << std::endl;
    std::cout << "setblock -293 18 " << pos << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"/fill ~-1 ~4 ~ ~-6 ~4 ~ minecraft:air\"} destroy" << std::endl;
    std::cout << "setblock -297 20 " << pos << " minecraft:command_block[facing=down]{Command:\"/fill ~3 ~2 ~ ~-2 ~2 ~ minecraft:black_concrete\"} destroy" << std::endl;
}
int main()
{
    wkey(0);
    std::cout << "setblock -293 18 " << 0 << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"function draw:pressl\"} destroy" << std::endl;
    bkey(1);
    int i = 2;
    while (i < 86)
    {
        wkey(i++);
        std::cout << "setblock -293 18 " << i - 1 << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"function draw:pressr\"} destroy" << std::endl;
        wkey(i++);
        std::cout << "setblock -293 18 " << i - 1 << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"function draw:pressl\"} destroy" << std::endl;
        bkey(i++);
        wkey(i++);
        std::cout << "setblock -293 18 " << i - 1 << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"function draw:pressm\"} destroy" << std::endl;
        bkey(i++);
        wkey(i++);
        std::cout << "setblock -293 18 " << i - 1 << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"function draw:pressr\"} destroy" << std::endl;
        wkey(i++);
        std::cout << "setblock -293 18 " << i - 1 << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"function draw:pressl\"} destroy" << std::endl;
        bkey(i++);
        wkey(i++);
        std::cout << "setblock -293 18 " << i - 1 << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"function draw:pressm\"} destroy" << std::endl;
        bkey(i++);
        wkey(i++);
        std::cout << "setblock -293 18 " << i - 1 << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"function draw:pressm\"} destroy" << std::endl;
        bkey(i++);
    }
    wkey(86);
    std::cout << "setblock -293 18 " << 86 << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"function draw:pressr\"} destroy" << std::endl;
    wkey(87);
    std::cout << "setblock -293 18 " << 87 << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"/fill ~-1 ~3 ~ ~-10 ~3 ~ minecraft:quartz_slab\"} destroy" << std::endl;
    for (int i = 0; i < 88; i++)
    {
        std::cout << "setblock -294 20 " << i << " minecraft:repeater[facing=east] destroy" << std::endl;
        std::cout << "setblock -295 20 " << i << " minecraft:repeater[facing=east] destroy" << std::endl;
        std::cout << "setblock -296 20 " << i << " minecraft:repeater[facing=east] destroy" << std::endl;
        std::cout << "setblock -293 19 " << i << " minecraft:command_block[facing=down]{Command:\"/playsound minecraft:piano." << i + 21 << " voice @p ~ ~ ~ 30\"} destroy" << std::endl;
        std::cout << "setblock -293 17 " << i << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"/fill ~ ~3 ~ ~ ~3 ~ minecraft:air\"} destroy" << std::endl;
        std::cout << "setblock -293 16 " << i << " minecraft:chain_command_block[facing=down]{auto:1,Command:\"particle minecraft:firework ~ ~10 ~0 0 0 0 0.05 30 force\"} destroy" << std::endl;
    }
    std::cout << "kill @e[type=minecraft:item]" << std::endl;
    return 0;
}