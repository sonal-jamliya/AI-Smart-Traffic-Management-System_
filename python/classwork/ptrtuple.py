def two_pal(data):
    first =0
    last = -1
    for i in range(len(data)//2):
        if data[first] !=data[last]:
            return False
        first +=1
        last -=1
    return True

print(two_pal([1,2,3,3,2,1]))