# submit_files.py
# Will get all files in a suitable format for submission

import os

def copy_and_rename(oldfile, newfile):
    with open(oldfile, 'r') as old:
        with open(newfile, 'w+') as new:
            for line in old: new.write(line)

def main():
    source_files = []
    for root, dirs, files in os.walk("."):
        for f in files:
            if f.endswith('.cpp') and root != '.':
                source_files.append(root[2:] + '\\' + f)
    print(f'number of source files = {len(source_files)}')
    for file in source_files:
        cwd = os.getcwd()
        new_name = file.replace('\\','-').replace('main','jeffvhenry')
        new_name = new_name.replace('Week','w').replace('Program','p')
        copy_and_rename(oldfile=f'{cwd}\\{file}', newfile=f'{cwd}\\{new_name}')

if __name__ == '__main__':
	main()
