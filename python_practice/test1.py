def cal(num):
    if num == 1:
        return 1
    return num * cal(num - 1)
