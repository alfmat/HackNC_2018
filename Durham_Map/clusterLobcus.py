import pandas as pd
import numpy as np 
#import matplotlib.pyplot as plt
#%matplotlib inline

df = pd.read_csv('rd2data.csv')
print(df.head())

obj = pd.DataFrame(df)

#print(obj['website'])
print(obj.columns)
#print(obj.values)

# print("Good restaurants: ")
obj.loc[(float(obj['rating']) > 3.0)]

print(obj.describe)

