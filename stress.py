import os

os.system('g++ bruteforce.cpp -o bruteforce')
os.system('g++ fast_solution.cpp -o fast_solution')
os.system('g++ generator.cpp -o generator')
t = 1

def compare(s1, s2):
    x = " ".join(s1.split())
    y = " ".join(s2.split())
    return x == y
while 1:
    
    os.system('generator.exe > input.txt')
    os.system('bruteforce.exe < input.txt > bruteforce.txt')
    os.system('fast_solution.exe < input.txt > fast_solution.txt')
    correct_output = open('bruteforce.txt').read()
    wrong_output = open('fast_solution.txt').read()
    counter_test = open('input.txt').read()

    if not compare(wrong_output, correct_output):
        print ('WA')
        print('counter test case')
        
        print(f"correct_output = {correct_output}")
        print(f"wrong output = {wrong_output}")
        print(f"counter test case = {counter_test}")
        exit(0)
    
    print(f'test cases passed {t}')
    t += 1