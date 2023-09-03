# Opens directory to select folder still needs testing for MAC OS and LINUX

import tkinter
from tkinter import filedialog
import os
import platform

root = tkinter.Tk()
root.withdraw()
system = platform.system()

folder_path = filedialog.askdirectory() + '/'

if (system("Windows")):
    folder_path = folder_path.replace('/', '\\')  

print(folder_path)
