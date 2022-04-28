def main():
    num1=int(input())
    num2=input()
    n=3
    i=n-1
    
    while(i>=0):
        print(num1*int(num2[i]))
        i=i-1
        
    print(num1*int(num2))
                   
if __name__=="__main__":
    main()
