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
            if f.endswith('.cpp') and root != '.' and 'old' not in root:
                source_files.append(root[2:] + '\\' + f)
    print(f'number of source files = {len(source_files)}')
    for file in source_files:
        cwd = os.getcwd()
        new_name = file.split('\\')
        new_name = list(d[0].lower() + d[-1] for d in new_name[0:-1])
        new_name = '-'.join(new_name) + '-jeffvhenry.cpp'
        copy_and_rename(oldfile=f'{cwd}\\{file}', newfile=f'{cwd}\\{new_name}')

if __name__ == '__main__':
	main()
