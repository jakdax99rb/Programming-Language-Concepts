
#Q1 using java as the language for the state machine. 

file = open("javaKeywords.txt", 'r')
javaKeywords = file.read()
file.close()

def stateDiagram(input):

    input = str(input)

    #String
    if input[0] == '"':
        count = 1
        while count <= len(input)-1:
            
            if input[count] == '"':

                print('This is a string: ', input)
                break
            
            if count == len(input)-1 and not input[count] == '"':

                print('Error, no closing quote.')

            count += 1
    
    #variable literal
    #check if its a keyword
    elif not (input in javaKeywords):
        #check for proper starting character
        if (ord(input[0]) >= 65 and ord(input[0]) <= 90) or (ord(input[0]) == 95) or (ord(input[0]) >= 97 and ord(input[0]) <= 122):

            count = 1
            while count <= len(input)-1:
                #check if its something other than a number or letter
                if not ((ord(input[count]) >= 65 and ord(input[count]) <= 90) or (ord(input[count]) >= 97 and ord(input[count]) <= 122) or (ord(input[count]) >= 48 and ord(input[count]) <= 57)):
                    
                    print('not a valid var name.')
                    break
                count += 1
                    
        
            print('valid var name')
    
    #int and floating point stuff. 
    if (ord(input[0]) >= 48 and ord(input[0]) <= 57):

        count = 1
        while count <= len(input)-1:

            if (input[count] == 'e') or input[count] == '.' or input[count] == '_':

                while count <= len(input)-1:
                    count += 1
                    if count == len(input)-1 and input[count] == 'f':

                        determ = ('Floating point literal')
                        break
                    elif not ((ord(input[count]) >= 48 and ord(input[count]) <= 57) or input[count] == '_'):

                        determ = ('error in exponent')
                        break
                    
                    

            elif not (ord(input[count]) >= 48 and ord(input[count]) <= 57):

                determ = ('error ,number followed by letters')
                break
            
            elif ((ord(input[count]) >= 48 and ord(input[count]) <= 57) and count == len(input)-1):

                determ = 'valid int'
            count += 1
        
        print(determ)

    
stateDiagram(r'"xyz123"')