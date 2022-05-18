seg = eval(input("段"))
l = []
f = open("input.log", "w+")
f.write(f"{seg}\n")
for _ in range(8):
    num = eval(input("轨"))
    f.write(f"{num}\n")
    for i in range(num):
        a, b = input().split(' ')
        f.write(f"{a} {b}\n")
        if i == 0:
            l.append(f"setblock(x, h, y, map[{a}][\"{b}\"], 30);")
        else:
            l.append(f"setblock(x, h+{i}, y, map[{a}][\"{b}\"], 30);")
    l.append("tick();")
print(f"//{seg}")
for i in l:
    print(i)
