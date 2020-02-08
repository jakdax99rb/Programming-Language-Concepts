import re
import os
import sys


def lexicalAnalyzer(inputFilePath):

    with open((os.path.join(sys.path[0], inputFilePath)), 'r') as file:

        inputString = file.read().replace('\n', '')

    # remove extra white space thats not needed
    inputString = inputString.strip()

    # split by white space first using pythons .split() and store in set.
    seperatedLexum = list(re.compile('(\W)').split(inputString))

    # removes any extra white space strings from list
    for item in seperatedLexum:

        if item in ['', ' ', '\n']:

            seperatedLexum.remove(item)

    return seperatedLexum


print(lexicalAnalyzer('lexicalAnalyzer.txt'))
