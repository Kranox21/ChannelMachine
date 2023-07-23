import tkinter
from tkinter import filedialog

root = tkinter.Tk()
root.withdraw()

folder_path = filedialog.askdirectory()

folder_path + "/"

print(folder_path)
