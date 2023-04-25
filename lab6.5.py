#Question1

def common_elements(list1, list2):
    common = []

    for element in list1:
        if element in list2 and element not in common:
            common.append(element)

    return common


list1 = [5,10,15,20,25]
list2 = [20,25,30,35,40]
common = common_elements(list1, list2)
print(common)

#Question2

def find_palindromes(inlist):

    palindromes = []
    for string in inlist:
        if string == string[::-1]:
            palindromes.append(string)
    return palindromes

inlist = ["kek", "pop", "eye", "ses"]
outlist = find_palindromes(inlist)
print(outlist)


#Question3

def sieve_of_eratosthenes(numbers):
    primes = []
    isPrime = [True] * len(numbers)
    for i, number in enumerate(numbers):
        if isPrime[i]:
            if number > 1:
                primes.append(number)
            for j in range(i, len(numbers), number):
                isPrime[j] = False
    return primes

numbers = [2, 3, 4, 5, 6, 7, 8]
print(sieve_of_eratosthenes(numbers))


#Question4

def anagrams(word,wordList):
    sortedWord = sorted(word.lower().replace(" ",""))

    anagramsList = []

    for w in wordList:
        sorted_w = sorted(w.lower().replace(" ",""))

        if sortedWord == sorted_w:
            anagramsList.append(w)

    return anagramsList

word = "listen"
anagramsList = anagrams("listen",["enlists", "google", "inlets", "banana"])
print(anagramsList,anagrams)








