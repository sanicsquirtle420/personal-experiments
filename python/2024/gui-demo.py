import tkinter as tk

root = tk.Tk()
root.title("Calculator !")

butt7 = tk.Button(root, text="Seven")
butt8 = tk.Button(root, text="Eight")
butt9 = tk.Button(root, text="Nine")
fuck1 = tk.Button(root, text=" / ")
butt4 = tk.Button(root, text="Four")
butt5 = tk.Button(root, text="Five")
butt6 = tk.Button(root, text="Six")
fuck2 = tk.Button(root, text=" * ")
butt1 = tk.Button(root, text="One")
butt2 = tk.Button(root, text="Two")
butt3 = tk.Button(root, text="Three")
fuck3 = tk.Button(root, text=" - ")
butt0 = tk.Button(root, text="Zero")
fuck4 = tk.Button(root, text=" . ")
fuck5 = tk.Button(root, text=" = ")
fuck6 = tk.Button(root, text=" + ")


butt7.grid(row=0 , column=0)
butt8.grid(row=0 , column=1)
butt9.grid(row=0 , column=2)
fuck1.grid(row=0 , column=3)

butt4.grid(row=1 , column=0)
butt5.grid(row=1 , column=1)
butt6.grid(row=1 , column=2)
fuck2.grid(row=1 , column=3)

butt1.grid(row=2 , column=0)
butt2.grid(row=2 , column=1)
butt3.grid(row=2 , column=2)
fuck3.grid(row=2 , column=3)

butt0.grid(row=3 , column=0)
fuck4.grid(row=3 , column=1)
fuck5.grid(row=3 , column=2)
fuck6.grid(row=3 , column=3)


root.mainloop()
