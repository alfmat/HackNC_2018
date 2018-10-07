import csv

names = []
address = []
ratings = []

with open("rd2data.csv") as f:
    reader = csv.reader(f)
    for row in reader:
        names.append(row[0])
        ratings.append(row[2]) #convert to float lat
        address.append(row[3])

names.pop(0)
ratings.pop(0)
address.pop(0)

i = 0
for x in ratings:
    ratings[i] = float(x)
    i += 1

#print(ratings)
output = {'names':names,'ratings':ratings,'address':address}
#print(names[0])
#print("Length:",len(names))

def search(name):
    searchResult = []
    for n in names:
        if name in n:
            searchResult.append(n)
    return searchResult

def searchR(minRating):
    i = 0
    searchResult = []
    searchResult1 = []
    for x in ratings:
        if x >= minRating:
            searchResult.append(i)
            #print(x,minRating,i)
        i += 1

    for x in searchResult:
        j = 0
        for y in names:
            if j == x:
                searchResult1.append(y)
            j += 1
    return searchResult1

def infoFinder(name):
    i = 0
    for x in names:
        if x == name:
            break
        i += 1
    return address[i]
#search for name given rating >=0  

uin = float(input("Min rating: "))
for x in searchR(uin):
    print(x)
print("Tuscan Blu address: "+infoFinder("Tuscan Blu"))
'''
print(names)
print(ratings)
print(address)'''