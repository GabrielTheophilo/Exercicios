def split(string):
    return [char for char in string]

def cypher(list, key):
    finalString = ''
    i = 0
    for x in list:
        charObject = list[i]
        keyObject = key[i]
        b2 = ord(keyObject)
        b1 = ord(charObject)
        char = ((b1-97)+(b2-97))+97
        interger = int(char)
        print(interger)
        if interger>122:
            interger = interger-26
        finalString += chr(interger)
        i += 1
    return finalString
plaintext = str(input("Insira o texto: ").lower())
plainkey = str(input("Insira a chave: ").lower())
key = split(plainkey)
plainlist = split(plaintext)
print(plainlist)
cypherObject = cypher(plainlist, key)
print(f"{cypherObject}")

