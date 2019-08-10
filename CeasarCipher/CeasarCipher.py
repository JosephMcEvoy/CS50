def cipher(key: int, message: str):
    if key <= 0:
        raise ValueError("Key must be greater than 0")
        
    ciphermsg = ''
    
    for char in message:
        ciphermsg += chr((ord(char) + key))

    return ciphermsg

# Example: print(cipher(1, 'hello'))
