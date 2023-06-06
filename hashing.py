import random

def hash_digest(msg):
    random.seed(msg)
    return random.randint(0, 2**32-1)
msg = input("Enter a message: ")
digest = hash_digest(msg)
print("Original message: ", msg)
print("Message Digest: ", digest)

msg1 = input("Enter the received message: ")
digest1 = hash_digest(msg1)
print("Received message: ", msg1)
print("Received Message Digest: ", digest1)

if digest == digest1:
    print("Message integrity is preserved")
else:
    print("Message integrity is not preserved")