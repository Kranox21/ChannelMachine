import tkinter
from tkinter import filedialog
import os
import platform

def main():
    pass

def SelectFolder():
    root = tkinter.Tk()
    root.withdraw()
    system = platform.system()

    folder_path = filedialog.askdirectory() + '/'

    return folder_path

