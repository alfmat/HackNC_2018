import pandas as pd
import numpy as np 
from matplotlib import pyplot as plt 
from sklearn.linear_model import LinearRegression

df = pd.read_csv('users/alfredmathew/HackNC_2018/Durham_Map/edited_data/opentable.com_raleigh-durham-chapel-hill-restaurant-listings')
df.head()

df['name'].values