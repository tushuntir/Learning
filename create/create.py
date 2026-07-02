import sys

if len(sys.argv) < 3:
    print("Usage: python create.py <filename> <content>")
    sys.exit(1)

filename = sys.argv[1]
content = sys.argv[2]

with open(filename, "w") as file:
    file.write(content)
print(f"Created: {filename}")
