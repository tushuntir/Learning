with open('input.txt', 'r') as f:
    age = int(f.read())
    earth = 365
    xal = 364
    earth_days = age * earth
    xal_year, xal_days = earth_days // xal, earth_days % xal
    
with open("output.txt", 'w') as f:
    f.write(f"{xal_year} {xal_days}")