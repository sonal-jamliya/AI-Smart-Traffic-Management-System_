letter = ''' Dear <|name|>,
you are selected!
<|date|>'''

print(letter.replace("<|name|>","Sonal").replace("<|date|>","24 september 2027"))