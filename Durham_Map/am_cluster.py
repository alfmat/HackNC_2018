import csv

names = []
address = []
website = []
city = []
phnumber = []
description = []
category = []

with open("durham_restaurants.csv") as f:
    reader = csv.reader(f)
    for row in reader:
        names.append(row[0])
        city.append(row[7])
        description.append(row[10])
        website.append(row[1])
        phnumber.append(row[8])
        address.append(row[3])
<<<<<<< HEAD
        category.append(row[5])

names.pop(0)
city.pop(0)
description.pop(0)
website.pop(0)
phnumber.pop(0)
address.pop(0)
category.pop(0)
=======
>>>>>>> 9dd68cabbd84743c6a09f5d2197551e9d385808c

def search(name):
    searchResult = []
    for n in names:
        if name == n:
            searchResult.append(n)
    return searchResult

print(search('La Volta'))