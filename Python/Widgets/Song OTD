import tkinter as tk
from datetime import date


#List of songs in a dictionary
songs = [
    {"title": "The Sun", "artist": "Brittany Broski"},
    {"title": "New Romantics", "artist": "T-Swizzle"},
    {"title": "These Four Walls", "artist": "Little Mix"},
    {"title": "Planet is Doomed", "artist": "ODETT"},
    {"title": "Throw a Dog a Bone", "artist": "ODETT"},
     
]

# Function to get todays song
def get_SOTD():
    today_index = date.today().toordinal() %len(songs)
    song = songs[today_index]
    title_label.config(text=f"Title: {song['title']}")
    artist_label.config(text=f"Artist: {song['artist']}")


#create the main window thingy
root=tk.Tk()
root.title("Song of The Day Generator")
root.geometry("300x150")

# labels for title and artist
title_label =tk.Label(root, text="", font=("Helvetica",14))
title_label.pack(pady=10)

artist_label = tk.Label(root, text="",font=("Helvetica", 12))
artist_label.pack(pady=5)

#button to refresh if they do not like the song cause they have poor taste
refresh_button= tk.button(root, text="What is todays jaziest of songs?", command=get_SOTD)
refresh_button.pack(pady=10)

#display the actual song when app starts when executed
get_SOTD()

# run
root.mainloop()
