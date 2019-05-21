
def minReplacements(original, palindrome, m, n,even):
    # base case:  we're finished processing either string so we're done
    if (m == 0 or n == 0) and (even == 0):
        return 1
    if ( m == 0 or n== 0) and (even == 1):
        return 0
    # The characters in the string match so find out how many replacements are
    # required for the remaining characters in the strings.
    if (original[m-1] == palindrome[n-1]):
        return minReplacements(original, palindrome, m-1, n-1,1)

    # Recurse on replacing a character in the original string
    # with a character in the palindrome string
    return 1 + minReplacements(original, palindrome, m-1, n-1,1)

s1 = "bbb"
s2 = "bab"
res = minReplacements(s1,s2,3,3,0)
print(res)