import pandas as pd
import numpy as np 
from matplotlib import pyplot as plt 
from skylearn.cluster import KMeans

df = pd.read_csv('opentable.com_raleigh-durham-chapel-hill-restaurant-listings.csv')
df.head()