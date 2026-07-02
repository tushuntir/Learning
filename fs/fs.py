import os
items = os.listdir(".")
for item in items:
    if os.path.isfile(item):
        print("File found: ", item)