Q: Given a dictionary API and a string, find the longest subsequence in that string which is a valid word.  

A:

1. store all the characters of the string in a hashmap, and longest string

    int max_length = 0
    unordered_map<char, int> hashmap; // char is char in side string, int is index in the string

2. iterate through the dictionary, check if a word can be made

if hashmap contains all char inside a word{
    index = hashmap[first char of word]
    check if the chars of the word is in right order

    if in right order {
        if(length > max_length){
            store this word
        } 
    }
}

3. return the word