import numpy as np
from PIL import Image
img = Image.open('sanu.jpg')
arr = np.array(img)
print arr
