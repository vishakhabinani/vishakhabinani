# -*- coding: utf-8 -*-
"""
Created on Wed Aug 23 23:20:53 2023

@author: HP
"""
import random
def create_question(movie):
    a=list(movie)
    temp=[]
    n=len(movie)
    for i in range(n):
        if(a[i]==' '):
            temp.append(' ')
        else:
            temp.append('*')
    b=''.join(str(x) for x in temp)
    return b
def is_present(letter,movie):
    c=movie.count(letter)
    if(c==0):
        return False
    else:
        return True

def unlock(mod_qn,movie,letter):
    ref=list(movie)
    qnl=list(mod_qn)
    temp=[]
    n=len(movie)
    for i in range(n):
        if(ref[i]==letter or ref[i]==''):
            temp.append(ref[i])
        else:
            if(qnl[i]=='*'):          #modified question is unravelled
                temp.append('*')
            else:
                temp.append(ref[i]) 
        #modified question had already been ravelled
        
    qn_new=''.join(str(x) for x in temp)
    return qn_new
def play():
    points=0
    not_said=True
    movies=["anand","gadar","taare zameen par","dream girl","yamla pagla deewana","happy new year","omg 2","titanic","dangal","bajrangi bhaijaan"]
    picked_movie=random.choice(movies)
    qn=create_question(picked_movie)
    modified_qn=qn
    print(qn)
    print("")
    while not_said:
        letter=input("Enter a letter: ")
        print(" ")
        if(is_present(letter,picked_movie)):
            modified_qn=unlock(modified_qn,picked_movie,letter)
            print(modified_qn)
            d=int(input("Press 1 to guess the movie or 2 to guess another letter "))
            if(d==1):
                ans=input("Guess the movie : ")
                if(ans==picked_movie):
                    points=points+1
                    print("CORRECT")
                    not_said=False
                    c=int(input("Press 1 to keep playing or 0 to quit "))
                    print(" ")
                    if(c==0):
                        print("Your score is: ",points)
                        print("Thanks for playing")
                    else:
                        print("LETS PLAY GUESS THE MOVIE")
                        print("")
                        play()
        
                else:
                    print("TRY AGAIN")

        else:
            print("Not found")

        

    

                
                
        

print("LETS PLAY GUESS THE MOVIE")
print("")
play()