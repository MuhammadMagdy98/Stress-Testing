import os

os.system('g++ bruteforce.cpp -o bruteforce')
os.system('g++ fast_solution.cpp -o fast_solution')
os.system('g++ generator.cpp -o generator')
t = 1

def compare(s1, s2, input_test):
    return s1 == s2
while 1:
    
    os.system('./generator > in.txt')
    os.system('./bruteforce < in.txt > bruteforce.txt')
    os.system('./fast_solution< in.txt > fast_solution.txt')
    correct_output = open('bruteforce.txt').read()
    wrong_output = open('fast_solution.txt').read()
    counter_test = open('in.txt').read()

    if not compare(wrong_output, correct_output, counter_test):
        print ('WA')
        print('counter test case')
        
        print(f"correct_output = {correct_output}")
        print(f"wrong output = {wrong_output}")
        print(f"counter test case = {counter_test}")
        exit(0)
    
    print(f'test cases passed {t}')
    t += 1