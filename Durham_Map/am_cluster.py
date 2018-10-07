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

def fn(nameDF,minRating):
    #return array of names of companies w. ratings > minRating
    return nameDF.loc[(nameDF.rating > minRating),nameDF.name]

def main():
    search('Burger King')

main()