def split(string):
    return [char for char in string]

def cypher(list, shift):
    g = ''
    i = 0
    if shift>25:
        modulus = shift//25
        if modulus == 1:
            shift -= 25
        else:
            new_shift = shift/modulus
            shift = int(new_shift)
    for x in list:
        a = ord(list[i])
        if a == 32:
            b = a
        elif a+shift>122:
            b = (a-25+shift)
        else:
            b = (a+shift)
        c = chr(b)
        g += c
        i += 1
    return g

def decypher(cyphertext, shift):
    g = ''
    i = 0
    text = split(cyphertext)
    if shift>25:
        modulus = shift//25
        if modulus == 1:
            shift -= 25
        else:
            new_shift = shift/modulus
            shift = int(new_shift)
    for x in text:
        a = ord(text[i])
        if a == 32:
            b = a
        elif (a-shift<97):
            b = (a+25)-shift
        else:
            b = (a-shift)
        c = chr(b)
        g += c
        i += 1
    return g


plaintext = str(input("Insert the text: ").lower())
shift = int(input("Insert the shift: "))
cy = split(plaintext)
cyphertext =  cypher(cy, shift)
a = decypher(cyphertext, shift)
print(f"CYPHERTEXT = {cyphertext}")
print(f"DECYPHEREDTEXT = {a}")
