import csv

names = []
address = []
with open("durham_restaurants.csv") as f:
    reader = csv.reader(f)
    for row in reader:
        names.append(row[0])
        address.append(row[3])

def search(name):
    searchResult = []
    for n in names:
        if name in n:
            searchResult.append(n)
    return searchResult

def main():
    search('Burger King')

main()