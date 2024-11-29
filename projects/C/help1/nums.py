from random import randint

f = open('nums', 'w')


nums = 'a\n' + '\n'.join([str(randint(-100, 100)) for i in range(100)]) + f'\nb\nc\n{str(randint(0, 10))}\nd\ne\n' 

f.write(nums)