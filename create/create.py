import sys
if len(sys.argv) < 3:
    print("Please enter a file name (create ok.txt)")
filename = sys.argv[1]
content = sys.argv[2]
with open(filename, "w") as file:
    file.write(content)