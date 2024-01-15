import random
def choose():
    options=["loop","ball","fashion","science","square","lollipop","function","telephone","water","butterfly"]
    the_one=random.choice(options)
    return the_one
def jumble(word):
    jumbled="".join(random.sample(word,len(word)))
    return jumbled
def thank(n1,n2,p1,p2):
    print(n1,'Your score is',p1)
    print('')
    print(n2,'Your score is',p2)
    print('')
    print('Thanks for playing!')
    return
name1=input('Player 1 Enter your name :')
print('')
name2=input('Player 2 Enter your name :')
print('')
print('LETS PLAY GUESS THE JUMBLED WORD')
print('')
pp1=0
pp2=0
turn=0
while(1):
    picked_word=choose()
    qn=jumble(picked_word)
    print(qn)
    print('')
    if(turn%2==0):
        print(name1,'Your turn')
        print('')
        ans=input('What is the word ')
        print('')
        if(ans==picked_word):
            pp1=pp1+1
            print('CORRECT!! Your Score is now',pp1)
            print('')
        else:
            print('WRONG The answer was',picked_word)
            print('')
        c=int(input('Enter 1 to keep playing or 0 to quit '))
    if(c==0):
      thank(name1,name2,pp1,pp2)
      break
    else:
        picked_word=choose()
        qn=jumble(picked_word)
        print('')
        print(qn)
        print('')
        print(name2,'Your turn')
        print('')
        ans=input('What is the word ')
        print('')
        if(ans==picked_word):
            pp2=pp2+1
            print('CORRECT!! Your Score is now',pp2)
            print('')
        else:
            print('WRONG The answer was',picked_word)
            print('')
    c=int(input('Enter 1 to keep playing or 0 to quit '))
    if(c==0):
      thank(name1,name2,pp1,pp2)
      break
turn=turn+1
        
       
        
        
    
    




           
