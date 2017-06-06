def check_add(st1, st2):
    i, j, diff = 0, 0, 0
    n = len(st1)
    k = len(st2)

    while i < n and j < k:
        if st1[i] == st2[j]:
            i += 1
            j += 1
        else:
            i += 1
            diff += 1

    if diff > 1:
        print "false"
    else:
        print "true"


def check_sub(st1, st2):
    diff = 0

    for c, v in zip(st1, st2):
        if c != v:
            diff += 1

    if diff > 1:
        print "false"
    else:
        print "true"

n = input("number of tests: ")

st1 = ""
st2 = ""

for x in range(0, n):
    st1 = raw_input("String 1: ")
    st2 = raw_input("String 2: ")
    len1 = len(st1)
    len2 = len(st2)

    # 0 AWAY
    if st1 == st2:
        print "true"
    # 1 AWAY CHECK
    elif len1 == (len2 + 1):
        check_add(st1, st2)
    elif len2 == (len1 + 1):
        check_add(st2, st1)
    elif len1 == len2:
        check_sub(st1, st2)
    else:
        print "false"
