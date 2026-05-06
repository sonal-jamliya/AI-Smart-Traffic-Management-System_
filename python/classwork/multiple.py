def check_pal(data):
    return data == data[::-1]

print(check_pal ([1,"abc","abc",1]))