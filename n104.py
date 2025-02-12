from fnmatch import fnmatch

def main():
    s = input()
    pattern = input()

    if fnmatch(s, pattern):
        print("YES")
    else:
        print("NO")
        
if __name__ == "__main__":
    main()