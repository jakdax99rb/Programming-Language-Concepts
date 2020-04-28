def nestedSelect():

    min, mid, max = 0,0,0
    first, second, third = 10,5,1
    
    if first >= second:
        #first > second
        if second >= third:
            #first > second > third
            max = first
            mid = second
            min = third
        
        elif third >= first:
            #third > first > second
            max = third
            mid = first
            min = second
        
        elif third >= second:
            #first > third >second 
            max = first
            mid = third
            min = second
    
    elif:
        #second > first
        if first >= third:
            #second > first > third
            max = second
            mid = first
            min = third
        
        elif third >= second:
            #third > second > first 
            max = third
            mid = second
            min = first

        elif third >= first:
            #second > third > first
            max = second
            mid = third
            min = first        
        


def nonNested():

    min, mid, max = 0,0,0
    first, second, third = 10,5,1
    
    if (first >= second) and (second >= third):
        max = first
        mid = second
        min = third
    
    if (first >= second) and (third >= first):
        max = third
        mid = first
        min = second

    if (first >= second) and (third >= second):

        max = first
        mid = third
        min = second

    if (first <= second) and (first >= third):

        max = third
        mid = second
        min = first

    if (first <= second) and (third >= second):

        max = second
        mid = first
        min = third

    if (first <= second) and (third >= first):

        max = second
        mid = third
        min = first 