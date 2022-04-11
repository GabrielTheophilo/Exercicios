def fat(n):
    if n == 0:
        return 1
    elif n == 1:
        return 1
    else:
        return n*fat(n-1)

if __name__ == '__main__':
    n = int(input("Insira N: "))
    print(fat(n))