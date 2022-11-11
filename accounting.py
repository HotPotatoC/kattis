wealth_map = {}
n, q = [int(i) for i in input().split()]

restart = 0
for i in range(q):
    args = input().split()
    if args[0] == "SET":
        wealth_map[args[1]] = args[2]
    elif args[0] == "RESTART":
        restart = args[1]
        wealth_map = {}
    elif args[0] == "PRINT":
        try:
            print(wealth_map[args[1]])
        except:
            print(restart)
