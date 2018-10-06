import pandas as pd
import numpy as np 
from matplotlib import pyplot as plt 
from skylear.cluster import KMeans

df = pd.read_csv(durham_restaurants.csv)
df.head()

k = 2
kmeans = KMeans(n_clusters=k)
kmeans = kmeans.fit(df)

labels = kmeans.labels_

centroids = kmeans.cluster_centers_