s = {1,2,3,4,5,6,7}

accessing set
for item in s:
print(item)


Methods in set

Adding element in set
s.add(8)

Removing element from set
s.remove(5)
s.discard(5)

removing last element
s.pop()

difference() - Shows un common elements
s1= {1,2,3,4,5}
s2 = {6,7,8,9,10}

s3 = s2.difference(s1)
print(s3)
print(s2-s1)


difference_update() - assign unmatched element to set
s1 = {1, 2, 3, 4, 5}
s2 = {1, 2, 3, 6, 7}

s2 -= s1
print(s2)


s2.difference_update(s1)
print(s2)


union() - show common element between set

s1 = {1, 2, 3, 4, 5}
s2 = {1, 2, 3, 6, 7}

s3 = s2|s1
print(s3)

s3 = s1.union(s2)
print(s3)

s1 = {1, 2, 3, 4, 5}
s2 = {1, 2, 3, 6, 7}


update() - update one set with another set
s1 = {1, 2, 3, 4, 5}
s2 = {1, 2, 3, 6, 7}
s1.update(s2)
print(s1)


intersection() - return common element in both set

s1 = {1, 2, 3, 4, 5}
s2 = {1, 2, 3, 6, 7}

s3 = s1&s2
s3 = s1.intersection(s2)
print(s3)

intersection_update() - update one set with common of another set
s1.intersection_update(s2)
print(s1)


isdisjoint - return boolean if the set has common value or not

s1 = {1, 2, 3, 4, 5}
s2 = {6, 7, 8, 9, 10}
s3 = {1, 2, 3, 4, 5}

print(s1.isdisjoint(s3))
print(s1.isdisjoint(s2))


issubset() - return boolean if one is a subset of another

s1 = {1, 2, 3, 4, 5, 7, 8}
s2 = {3,4,5}

print(s2.issubset(s1))


issuperset() - return boolean if one is a superset of another

s1 = {1, 2, 3, 4, 5, 7, 8}
s2 = {3,4,5}

print(s1.issuperset(s2))

symmetric_difference() - return unmatched item from both set
s1 = {1, 2, 3, 4, 5}
s2 = {3, 4, 5, 6}
print(s1 ^ s2)

print(s1.symmetric_difference(s2))
s1.symmetric_difference_update(s2)
print(s1)
