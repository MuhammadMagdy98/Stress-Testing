import shutil
import os

if os.path.isdir('test-cases'):
    shutil.rmtree('test-cases')

    os.remove('test_cases.zip')
# os.mkdir('test-cases')
# test_cases = int(input("Enter number of test cases:"))
# os.system('g++ generator.cpp -o generator')
# while test_cases > 0:
#     os.system(f'./generator > test-cases/input{test_cases}.txt')
#     test_cases -= 1


# shutil.make_archive('test_cases', 'zip', 'test-cases')
