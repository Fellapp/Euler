# A palindromic number reads the same both ways. The largest palindrome made from the product of two 
# -digit numbers is 9009 = 91 * 90

# Find the largest palindrome made from the product of two 
# -digit numbers.

def pal(a=100,b=100):
    best = a * b
    maxi = 1000
    for i in range(100, maxi):
        for j in range(100, maxi):
            product = str(i*j)
            if product[:len(product)//2]==product[len(product)-(len(product)//2):len(product)][::-1] and int(product) > best:
                best = int(product)

    return best
    
print(pal())
# for i in range(1,3) :
#     print(i)
# best = str(109901)
# print(best[:len(best)//2]==best[len(best)-(len(best)//2):len(best)][::-1])