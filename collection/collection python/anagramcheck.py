#anagram checker

a=input("word1\n")
b=input("word2\n")

if sorted(a)==sorted(b):
    print("they are anagrams")
else:
    print("they are not anagrams")