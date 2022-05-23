def split(string):
    return [char for char in string]

def cypher(cy):
    g = ''
    b = len(cy)
    for i in range(0, b):
        cypherChar = ord(cy[i])
        shift = cypherChar%97
        newInt = 122-shift
        newText = chr(newInt)
        g += newText
    return g

plaintext = str(input("Insert the text: ").lower())
cy = split(plaintext)
print(cypher(cy))
