def main():    
    def div(init = 20):
        while True:
            if all(init % i == 0 for i in range(1,21)):
                return init
            else:
                init += 1                    

    print(div())

if __name__ == "__main__":
    main()