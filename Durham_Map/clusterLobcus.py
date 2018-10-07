import pandas as pd
import numpy as np 
import csv
#import matplotlib.pyplot as plt
#%matplotlib inline
name=[],website=[],rating=[],address=[],una=[],category=[],price_range=[],city=[],phnumber=[],una2=[],description=[],other=[]
df = pd.read_csv('rd2.csv')
for row in df:
    name.append(row[0])
    website.append(row[1])
    rating.append(row[2])
    address.append(row[3])
    una.append(row[4])
    category.append(row[5])
    price_range.append(row[6])
    city.append(row[7])
    phnumber.append(row[8])
    una2.append(row[9])
    description.append(row[10])
    other.append(row[11])
print(df.head())

obj = pd.DataFrame(df)

#print(obj['website'])
print(obj.columns)
#print(obj.values)

# print("Good restaurants: ")
print(obj['rating'])
rating1 = float(input("Enter lowest rating a restaurant can have."))
obj.loc[(obj.rating > rating1),obj.name]

print(obj.describe)

