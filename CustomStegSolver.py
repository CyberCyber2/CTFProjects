import cv2 
import numpy as np
oldImage = cv2.imread("file.png")
newImage = cv2.imread("newfile.png")
oheight, owidth, ochannels = oldImage.shape
differences=cv2.subtract(oldImage,newImage)
x = 0
print("X-cord|Y-cord [Original R,G,B] [New R,G,B ]")
for a,b in zip(oldImage,newImage):
    y = 0
    for c,d in zip(a,b):
        for e,f in zip(c,d):
            if e != f:
                ascii = c[0] - d[0] 
                print (chr(ascii))
                print(x,y,c,d)
                print("#############")
                break
        y += 1
    x += 1
